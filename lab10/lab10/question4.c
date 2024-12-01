/*Write a program that use a structure to hold information about movies, such as title,
genre, director, release year, and rating. Write a program that allows users to add new
movies, search for movies by genre, and display all movie details.*/
#include<stdio.h>
#include<string.h>

struct film_info{
    char movie_name [100];
    char movie_genre [100];
    char director_name [100];
    char release_year[100];
    float rating;
};

void inputFilm_info(struct film_info *film_info){

    printf("Enter the name of the movie: ");
    fgets(film_info->movie_name, sizeof(film_info->movie_name), stdin);
    film_info->movie_name[strcspn(film_info->movie_name, "\n")]= '\0';

    printf("Enther the genre of the movie: ");
    fgets(film_info->movie_genre , sizeof(film_info->movie_genre), stdin);
    film_info->movie_genre [strcspn(film_info->movie_genre , "\n")] = '\0';

    printf("Enther the name of the director : ");
    fgets(film_info->director_name , sizeof(film_info->director_name) , stdin);
    film_info->director_name [strcspn(film_info->director_name , "\n")] = '\0';

    printf("Enter the release year of the movie: ");
    fgets(film_info->release_year , sizeof(film_info->release_year) , stdin);
    film_info->release_year [strcspn(film_info->release_year , "\n")] = '\0';

    printf("Enter the rating of the film : ");
    scanf("%f", &(film_info->rating));

}

void printFilm_info(struct film_info *film_info){
    printf("The Name of the movie is : %s ", (film_info->movie_name));
    printf("The genre of the movie is : %s ", (film_info->movie_genre));
    printf("The Name of the director is : %s", (film_info->director_name));
    printf("The releasing Date is : %s ", (film_info->release_year));
    printf("The rating of the movie is : %.2f ", (film_info->rating));
}

int main (){
    struct film_info film_info[5];

    for(int i = 0; i < 5; i++){
        printf("For move %d\n", i+1);
        inputFilm_info(&film_info[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("For move %d \n", i+1);
        printFilm_info(&film_info[i]);
    }
    
    return 0;
}