//                neusted switch conditinal statement

# include <stdio.h>

int main ()
{
    int rollNo;
    int marks;
    printf("enter your roll number : ");
    scanf("%d", &rollNo);

    switch(rollNo)
    {
        case 14:
            printf("ROLL NO : 14\n");
            switch(marks)
            {
                case 40:
                    printf("marks = 40+ \n");
                    break;
                default:
                    printf("your marks not 40+ \n");
                    break;
            }
            break;
        
        case 17:
            printf("ROLL NO : 17\n");
            switch(marks)
            {
                case 60:
                    printf("your marks is 60+ 🎉");
                    break;
                default:
                    printf("your marks not 60+ ");
            }
            break;

        case 23:
            printf("ROLL NO : 23\n");
            switch (marks)
            {
            case 80:
                printf("your marks is 80+");
                break;
            
            default:
                printf("your marks not 80+");
                break;
            }
            break;

        default:
            printf("your ROLL NO and marks no match");
    }
    return 0;
}