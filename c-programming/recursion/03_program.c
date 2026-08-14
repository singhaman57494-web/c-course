//                     first program int c

#include <stdio.h>
#include <string.h>

int main()
{
    char choise[50];

    while (choise > 0)
    {
        printf("enter your choise (km/foot/inch/kg/meter/end) : ");
        scanf("%49s", choise);

        if (strcmp(choise, "km") == 0)
        {
            int km;
            printf("enter the kilometer : ");
            scanf("%d", &km);
            float meters = 1000.0f * km;
            printf("this is %.2f meters\n", meters);
        }
        else if(strcmp(choise, "end")== 0)
        {
            break;
        }
        else if (strcmp(choise, "foot") == 0)
        {
            float foot;
            printf("enter the foot : ");
            scanf("%f", &foot);
            float inches = foot * 12.0f;
            printf("the inches are : %.2f\n", inches);
        }
        else if (strcmp(choise, "inch") == 0)
        {
            int cm;
            printf("enter the centimeter : ");
            scanf("%d", &cm);
            float inch = cm / 2.54f;
            printf("the inch is : %.2f\n", inch);
        }
        else if (strcmp(choise, "kg") == 0)
        {
            float kg;
            printf("enter the kilograms : ");
            scanf("%f", &kg);
            float pound = kg * 2.205f;
            printf("the pound is : %.2f\n", pound);
        }
        else if (strcmp(choise, "meter") == 0)
        {
            int inches;
            printf("enter the inch : ");
            scanf("%d", &inches);

            float meter = inches * 0.0254;
            printf("the meter is : %.2f\n", meter);
        }
        else
        {
            printf("unknown choice\n");
        }
    }
    return 0;
}