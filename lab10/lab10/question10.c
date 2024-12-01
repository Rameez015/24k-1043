/*Design a structure to store information about travel packages, including package name,
destination, duration, cost, and number of seats available. Write a program that allows
users to book a travel package and display available packages.*/
#include<stdio.h>
#include<stdlib.h>

struct travel_package {
    char package_name[100];
    char destination[100];
    int duration;
    float cost;
    int available_seats;
};

void input_package(struct travel_package *pkg) {
    printf("Enter the name of the package: \n");
    fgets(pkg->package_name, 100, stdin);
    pkg->package_name[strcspn(pkg->package_name, "\n")] = '\0';
    
    printf("Enter the destination: \n");
    fgets(pkg->destination, 100, stdin);
    pkg->destination[strcspn(pkg->destination, "\n")] = '\0';
    
    printf("Enter the duration (in days): \n");
    scanf("%d", &(pkg->duration));
    
    printf("Enter the cost of the package: \n");
    scanf("%f", &(pkg->cost));
    
    printf("Enter the number of available seats: \n");
    scanf("%d", &(pkg->available_seats));
    getchar();
}

void display_package(struct travel_package *pkg) {
    printf("\nPackage Name: %s\n", pkg->package_name);
    printf("Destination: %s\n", pkg->destination);
    printf("Duration: %d days\n", pkg->duration);
    printf("Cost: %.2f\n", pkg->cost);
    printf("Available Seats: %d\n", pkg->available_seats);
}

void book_package(struct travel_package *pkg) {
    if (pkg->available_seats > 0) {
        printf("Booking successful!\n");
        pkg->available_seats--;
    } else {
        printf("Sorry, no seats available.\n");
    }
}

int main() {
    int num_packages;

    printf("Enter the number of travel packages available: \n");
    scanf("%d", &num_packages);
    getchar();

    struct travel_package *packages = (struct travel_package *)malloc(num_packages * sizeof(struct travel_package));

    if (packages == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    for (int i = 0; i < num_packages; i++) {
        printf("\nFor Package %d:\n", i + 1);
        input_package(&packages[i]);
    }

    printf("\nAvailable Travel Packages: \n");
    for (int i = 0; i < num_packages; i++) {
        display_package(&packages[i]);
    }

    int package_choice;
    printf("\nEnter the number of the package you want to book: \n");
    scanf("%d", &package_choice);
    
    if (package_choice > 0 && package_choice <= num_packages) {
        book_package(&packages[package_choice - 1]);
        display_package(&packages[package_choice - 1]);
    } else {
        printf("Invalid package choice.\n");
    }

    free(packages);

    return 0;
}