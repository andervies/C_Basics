#include <stdio.h>
#include <stdlib.h>

int main() {

    // This is a single line comment
    /* This is a multi-line comment
        Because I can type several lines of comments in between the delimeters
    */

    // Initializing an integer without assigning a value to it
    int age;

    // Initializing and assigning a single character
    char singleCharacter = 'H';

    // Initializing and assigning a string
    char characterName[] = "John";

    // Initializing and assigning a double
    double num = 1.0;

    // Printf enables us to print text in the console
    printf("My name is %s ", characterName);

    printf("Enter your age: ");

     // Scanf enables us to collect user inputs
    scanf("%d", &age);

    printf("I am %d years old\n", age);

   

    return 0;
}