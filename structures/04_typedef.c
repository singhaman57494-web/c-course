//                              typedef in structure

#include <stdio.h>
#include <string.h>

typedef struct student {
    int id;
    char name[20];
}std;

std s1, s2;

void input()
{
    printf("the id is s1 : %d\n ", s1.id);
    printf("the id is s1 : %s\n ", s1.name);
    printf("the id is s2 : %d\n", s2.id);
    printf("the name of s2 is : %s\n", s2.name);
}
int main()
{
    s1.id = 56;
    strcpy(s1.name, "naman");
    s2.id = 44;
    strcpy(s2.name, "jeck");

    input();
    
    return 0;
}