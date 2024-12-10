// (bro it took forever to code this)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct player {
    char name[20];
    char team[20];
};

struct bowl {
    char type[10], arm[5];
    struct player ply;
};

struct bat {
    char type[10], handed[8]; 
    struct bowl ply2;         
};

void inputString(const char *prompt, char *str, size_t size) {
    printf("%s", prompt);
    getchar();
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void printPlayer(const struct bat *player) {
    printf("\nName: %s | Team: %s\nBowling: %s (%s)\nBatting: %s (%s)\n",
           player->ply2.ply.name, player->ply2.ply.team,
           player->ply2.type, player->ply2.arm,
           player->type, player->handed);
}
// crude operations starts here: 
void createPlayer(FILE *file) {
    struct bat player;
    inputString("Enter player name: ", player.ply2.ply.name, sizeof(player.ply2.ply.name));
    inputString("Enter team name: ", player.ply2.ply.team, sizeof(player.ply2.ply.team));
    inputString("Enter bowling type (or N/A): ", player.ply2.type, sizeof(player.ply2.type));
    inputString("Enter bowling arm (or N/A): ", player.ply2.arm, sizeof(player.ply2.arm));
    inputString("Enter batting type (or N/A): ", player.type, sizeof(player.type));
    inputString("Enter batting handedness (or N/A): ", player.handed, sizeof(player.handed));
    fwrite(&player, sizeof(player), 1, file);
    printf("Player added successfully!\n");
}

void readPlayers(FILE *file) {
    struct bat player;
    rewind(file);
    printf("\n--- Player List ---\n");
    while (fread(&player, sizeof(player), 1, file)) {
        printPlayer(&player);
    }
}

void updatePlayer(FILE *file) {
    struct bat player;
    char name[20];
    int found = 0;

    inputString("Enter player name to update: ", name, sizeof(name));
    rewind(file);

    while (fread(&player, sizeof(player), 1, file)) {
        if (strcmp(player.ply2.ply.name, name) == 0) {
            fseek(file, -sizeof(player), SEEK_CUR);
            printf("Updating player...\n");
            inputString("Enter new team name: ", player.ply2.ply.team, sizeof(player.ply2.ply.team));
            inputString("Enter new bowling type: ", player.ply2.type, sizeof(player.ply2.type));
            inputString("Enter new bowling arm: ", player.ply2.arm, sizeof(player.ply2.arm));
            inputString("Enter new batting type: ", player.type, sizeof(player.type));
            inputString("Enter new batting handedness: ", player.handed, sizeof(player.handed));
            fwrite(&player, sizeof(player), 1, file);  // Overwrite
            printf("Player updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Player not found!\n");
}

void deletePlayer(FILE *file) {
    FILE *temp = fopen("temp.dat", "wb");
    struct bat player;
    char name[20];
    int found = 0;

    inputString("Enter player name to delete: ", name, sizeof(name));
    rewind(file);

    while (fread(&player, sizeof(player), 1, file)) {
        if (strcmp(player.ply2.ply.name, name) != 0) {
            fwrite(&player, sizeof(player), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(temp);
    remove("players.dat");
    rename("temp.dat", "players.dat");
    printf(found ? "Player deleted successfully!\n" : "Player not found!\n");
}

int main() {
    FILE *file;
    int choice;

    while (1) {
        printf("\n--- Cricket Players Management System ---\n");
        printf("1. Add Player\n2. View Players\n3. Update Player\n4. Delete Player\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        file = fopen("players.dat", choice == 1 ? "ab+" : "rb+");
        if (file == NULL) {
            perror("Error opening file");
            exit(1);
        }

        switch (choice) {
            case 1: createPlayer(file); break;
            case 2: readPlayers(file); break;
            case 3: updatePlayer(file); break;
            case 4: deletePlayer(file); break;
            case 5: fclose(file); printf("Goodbye!\n"); exit(0);
            default: printf("Invalid choice. Try again.\n");
        }
        fclose(file);
    }
    return 0;
}