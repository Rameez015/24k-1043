/*Write a program that initializes a 2D character array with a list of words. Then, take a
word as input from the user and check if it exists in the array. Display "Found" if it’s there,
otherwise display "Not Found".*/
#include <stdio.h>
#include <string.h>

int main() {
    char words[][10] = {"Rameez", "Abdy", "Kabir", "Hassan", "Baroor"};
    int num_words = sizeof(words) / sizeof(words[0]);

    char search_word[20];

    printf("Enter a word to search: ");
    scanf("%s", search_word);

    int found = 0;
    for (int i = 0; i < num_words; i++) {
        if (strcmp(words[i], search_word) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Word found.\n");
    } else {
        printf("Word not found.\n");
    }

    return 0;
}