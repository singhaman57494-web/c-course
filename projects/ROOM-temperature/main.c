#include <stdio.h>

int getchoice()
{
    int choice;

    do
    {
        printf("Enter unit (1 = celsius, 2 = fahrenheit) : ");
            scanf("%d", &choice);

            if (choice != 1 && choice != 2)
            {
                printf("Invalid choice. please enter 1 or 2.\n");
            }

        
    } while (choice != 1 && choice != 2);

    return choice;
}

void checkcondition(float temperature)
{
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
}

float celsiusTOfahrenheit(float celsius)
{
    return (celsius * 9.0f / 5.0f) + 32.0f;
}

float fahrenheitTOcelsius(float fahrenheit)
{
    return (fahrenheit - 32.0f) * 5.0f / 9.0f;
}

void updateminmax(float temperature, int count, float *min, float *max)
{
    if (count == 1)
    {
        *min = temperature;
        *max = temperature;
    }
    else
    {
        if (temperature < *min)
        {
            *min = temperature;
        }
        if (temperature > *max)
        {
            *max = temperature;
        }
    }
}

void updatetreand(float temperature, float count, float *preivious_temperature, int *risingcount, int *fallingcount, int *samecount)
{
    if (count == 1)
    {
        *preivious_temperature = temperature;
    }
    else
    {
        if (temperature > *preivious_temperature)
        {
            printf("temperature is rising.\n");
            (*risingcount)++;
        }
        else if (temperature < *preivious_temperature)
        {
            printf("temperature is falling. \n");
            (*fallingcount)++;
        }
        else
        {
            printf("temperature is same. \n");
            (*samecount)++;
        }
        *preivious_temperature = temperature;
    }
}

void showreport(float average, float min, float max, float range, int risingcount, int fallingcount, int samecount)
{
    printf("\n===================TEMPERATURE REPORT====================\n");

    printf("average temperature : = %.2f c\n", average);

    if (average < 18.0)
    {
        printf("COLD ");
    }
    else if (average <= 27.0)
    {
        printf("COMFERTABLE ");
    }
    else
    {
        printf("HOT");
    }
    printf("\nminimum temperature  :  %.2f c\n", min);
    printf("maximum temperature    : %.2f c\n", max);

    printf("range is temperature   : %.2f c\n", range);

    printf("temperature is rising  : %d times\n", risingcount);
    printf("temperature is falling : %d times\n", fallingcount);
    printf("temperature is same    : %d times\n", samecount);

    printf("\n==========================================================\n");
}

void getTemperature(int choice,float *temperature,float *fahrenheit)
{
    if (choice == 1)
        {
            printf("enter Room temperature in celsius : ");
            scanf("%f", temperature);
            *fahrenheit = celsiusTOfahrenheit(*temperature);
        }
        else
        {
            printf("enter Room temprature in fahrenheit : ");
            scanf("%f", fahrenheit);
            *temperature = fahrenheitTOcelsius(*fahrenheit);
        }
}

int main()
{
    int choice;
    float temperature = 0.0f;
    float fahrenheit = 0.0f;
    char again;

    float sum = 0.0f;
    float average = 0.0f;
    int count = 0;
    float min = 0.0f;
    float max = 0.0f;
    float range = 0.0f;

    int risingcount = 0;
    int fallingcount = 0;
    int samecount = 0;

    float preivious_temperature = 0.0f;
    do
    {
        choice = getchoice();

        getTemperature(choice, &temperature, &fahrenheit);

        checkcondition(temperature);

        printf("fahrenheit = %.2f F\n", fahrenheit);
        printf("temperature = %.2f c\n", temperature);

        sum += temperature;
        count++;

        updateminmax(temperature, count, &min, &max);

        updatetreand(temperature, count, &preivious_temperature, &risingcount, &fallingcount, &samecount);

        printf("check another temperature? (y/n) : ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    average = (float)sum / count;
    range = max - min;

    showreport(average, min, max, range, risingcount, fallingcount, samecount);

    return 0;
}