/*Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
Palindrome” for each word. A palindrome is a word that reads the same forward and backward.
For example: "madam", "racecar", "level", "radar".*/
#include <stdio.h>
#include <string.h>
int isPalindrome(char word[]) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char word[20];
    printf("Enter a word: ");
    scanf("%s", word);
    if (isPalindrome(word)) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }
    return 0;
}