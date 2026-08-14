#include <stdio.h>

int main()
{
    int choice;
    float temperature = 0.0f;
    float fahrenheit = 0.0f;
    char again;
    float sum = 0.0f;
    int count = 0;
    float min = 0.0f;
    float max = 0.0f;
    float range = 0.0f;
    do
    {
        do
        {

            printf("Enter unit (1 = celsius, 2 = fahrenheit) : ");
            scanf("%d", &choice);

            if (choice != 1 && choice != 2)
            {
                printf("Invalid choice. please enter 1 or 2.\n");
            }

        } while (choice != 1 && choice != 2);

        if (choice == 1)
        {
            printf("enter Room temperature in celsius : ");
            scanf("%f", &temperature);
            fahrenheit = (temperature * 9.0f / 5.0f) + 32.0f;
        }
        else
        {
            printf("enter Room temprature in fahrenheit : ");
            scanf("%f", &fahrenheit);
            temperature = (fahrenheit - 32.0f) * 5.0f / 9.0f;
        }

        if (temperature < 18.0f)
        {
            printf("cold ");
        }
        else if (temperature <= 27.0f)
        {
            printf("comfortable ");
        }
        else
        {
            printf("Hot ");
        }

        printf("fahrenheit = %.2f F\n", fahrenheit);
        printf("temperature = %.2f c\n", temperature);

        sum += temperature;
        count++;

        if (count == 1)
        {
            min = temperature;
            max = temperature;
        }
        else
        {
            if (temperature < min)
            {
                min = temperature;
            }
            if (temperature > max)
            {
                max = temperature;
            }
        }

        printf("check another temperature? (y/n) : ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    float average = (float)sum / count;
    printf("average temperature : = %.2f c\n", average);

    if (average < 18.0)
    {
        printf("cold ");
    }
    else if (average <= 27.0)
    {
        printf("comfortable ");
    }
    else
    {
        printf("hot");
    }
    printf("\nminimum temperature :  = %.2f c\n", min);
    printf("maximum temperature : = %.2f c\n", max);

    range = max - min;
    printf("range is temperature : %.2f c\n", range);

    return 0;
}