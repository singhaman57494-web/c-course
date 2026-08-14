//                       without argument with return value


# include <stdio.h>

int takenumber() //        without argument
{
    int i;
    printf("enter the number :");
    scanf("%d", &i);       // user se number input
    return i;  //   return value
}

int main ()
{
    int c = takenumber(); //  function call
    printf("the number entered is :%d\n", c);
    return 0;
}