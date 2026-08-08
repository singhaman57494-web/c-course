//                                      global variable using structure
#include <stdio.h>
#include <string.h>

struct student
{
    char name[34];
    char id[20];
    float marks;
    char fav_char;
};

struct student s1, s2, s3;

void print()
{
    printf("student name is : %s\n", s1.name);
    printf("haryy got %s id\n", s1.id);
    printf("haryy got %.2f marks\n", s1.marks);
    printf("haryy got %c favchar\n", s1.fav_char);

    printf("student name is : %s\n", s2.name);
    printf("ravi got %s id\n", s2.id);
    printf("ravi got %.2f marks\n", s2.marks);
    printf("ravi got %c favchar\n", s2.fav_char);

    printf("student name is : %s\n", s3.name);
    printf("subham got %s id\n", s3.id);
    printf("subham got %.2f marks\n", s3.marks);
    printf("subham got %c favchar\n", s3.fav_char);
}
int main()
{
    strcpy(s1.name, "harry");
    strcpy(s2.name, "ravi");
    strcpy(s3.name, "shubhm");

    strcpy(s1.id, "h@rry");
    strcpy(s2.id, "r@vi");
    strcpy(s3.id, "subh@m");

    s1.marks = 99;
    s2.marks = 78;
    s3.marks = 85;

    s1.fav_char = '#';
    s2.fav_char = '*';
    s3.fav_char = '$';

    print();

    return 0;
}