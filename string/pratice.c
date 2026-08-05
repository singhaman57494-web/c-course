# include <stdio.h>

// int main ()
// {
//     char str[] = "NOIDA";
//     char *p = str;

//     p = p + 2;
//     printf("%c\n", *p);
//     printf("%s\n", p);
//     return 0;
// }

// int main ()
// {
//     char name[]= "BCALAB";
//     char *p = name;

//     p++;
//     p++;

//     printf("%s\n", p);
//     printf("%c\n", p[1]);

//     return 0;
// }

//                                      *call by value

void change(int *ptr)
{
    *ptr = 100;
}
int main ()
{
    int a = 10;
    
    printf("after to change : %d\n", a);

    change(&a);

    printf("change to later:%d\n", a);
    return 0;
}