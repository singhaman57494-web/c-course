# include <stdio.h>

int main ()
{
    int age = 18;  // integer (whole numbers)
    float height = 167.5; //float (decimal numbers)
    char grade = 'A'; // character (single letter / simbol in single quotes)


    printf("agr :%d\n", age);
    printf("height : %.1f cm\n", height); // %.1f prints only one decimal place.
    printf("grade : %c\n", grade);

    return 0;
}