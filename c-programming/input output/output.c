#include <stdio.h>

int main() {
    int product = 18;             
    float price = 167.5;     
    char grade = 'A';        

    // %d, %f, and %c are format specifiers used to print variables
    printf("product : %d\n", product);
    printf("price : %.1f Rs\n", price); 
    printf("Grade : %c\n", grade);

    return 0;
}