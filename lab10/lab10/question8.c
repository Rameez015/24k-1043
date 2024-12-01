/*Create a structure to store details about cars in a dealership, including make, model,
year, price, and mileage. Write a program that allows users to add new cars, display a
list of available cars, and search for cars by make or model.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car {
    int makeyear;
    char model[150];
    int price;
    float mileage;
};


void input_struct_car(struct car *c) {
    printf("Enter the make year of the car: \n");
    scanf("%d", &(c->makeyear));
    getchar();  
    printf("Enter the model of the car: \n");
    fgets(c->model, 150, stdin);
    c->model[strcspn(c->model, "\n")] = '\0';
    printf("Enter the price of the car: \n");
    scanf("%d", &(c->price));
    printf("Enter the mileage of the car: \n");
    scanf("%f", &(c->mileage));
}


void print_struct_car(struct car *c, int num_cars) {
  printf("The available Cars are : \n ");
    for (int i = 0; i < num_cars; i++) {
        printf("\n Car %d Details:\n", i + 1);
        printf("Make Year: %d\n", c[i].makeyear);
        printf("Model: %s\n", c[i].model);
        printf("Price: %d\n", c[i].price);
        printf("Mileage: %.2f\n", c[i].mileage);
    }
}

int main() {
    int a;

    printf("Enter the number of cars you want to enter: \n");
    scanf("%d", &a);

    
    struct car *c = (struct car *)malloc(a * sizeof(struct car));
    if (c == NULL) {
        printf("Memory allocation failed \n");
        return 1;
    }


    for (int i = 0; i < a; i++) {
        printf("For Car %d: \n", i + 1);
        input_struct_car(&c[i]);
    }

    char opt;
    while (1) {
        printf("\nDo you want to add more cars? (Y/N): \n");
        getchar();
        scanf("%c", &opt);

        if (opt == 'Y' || opt == 'y') {
            a++;
            c = (struct car *)realloc(c, a * sizeof(struct car));

            if (c == NULL) {
                printf("Memory reallocation failed \n");
                return 1;
            }

            printf("For Car %d: \n", a);
            input_struct_car(&c[a - 1]);
        } else if (opt == 'N' || opt == 'n') {
            break;
        } else {
            printf("Invalid option! Please enter Y or N.\n");
        }
    }

    print_struct_car(c, a);

    free(c);

    return 0;
}