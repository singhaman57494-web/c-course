# include <stdio.h>

/*
.logical operator in c

   operator           |        .description                                   |          example
                      |                                                        |
 &&                   |      logical AND operator. if both the operands are    |  (a && b) is false.
                      |      non-zero. then the condition is true.             | 
                      |                                                        |     
 ||                   |      logical OR operator . if any of these two         | (a || b) is true.
                      |      operands is non-zero then condition becomes true  |    
                      |                                                        |
 !                    |      logical NOT operator. it is used to reverse the   |  !(a && b) is truue.
                      |      logical state of its operand. if condition is     |
                      |      true , then logical NOT operator will make it     |
                      |      false                                             |  
                       */          
                      
//                                  AND operator(&)                       
int main ()
{
    int a = 34;
    int b = 34;

    printf("%d", a&&b);
    return 0;
}

//                           OR operator (||)
# include <stdio.h>

int main ()
{
    int a = 20;
    int b = 30;

    printf("%d", a||b);
    return 0;
}

//                         NOT operator (!)
# include <stdio.h>

int main ()
{
    int a = 27;
    int b = 29;

    printf("%d", !(a>b));
}