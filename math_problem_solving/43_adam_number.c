//                      adam number in c 

# include <stdio.h>

int main ()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int square = n * n;
    int squarerev = 0;
    for(int i = square; i > 0; i /= 10)
    {
        squarerev = squarerev * 10 +(i % 10);
    }
    int reverse = 0;
    for(int i = n; i > 0; i /= 10)
    {
        reverse = reverse * 10 +(i % 10);
    }
    int revsquare = reverse * reverse;
    if(squarerev == revsquare)
    {
        printf("adam number");
    }
    else 
    {
        printf("not adam number");
    }
    return 0;
}