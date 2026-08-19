//                  //               function return celsius to fahrenheit


#include <stdio.h>
float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9.0/5.0) + 32.0;
}

int main()
{
    int celsius;
    printf("enter celcius temperature : ");
    scanf("%d", &celsius);

    float ans = celsiusToFahrenheit(celsius);
    printf("fahrenheit temp is : %.2f F\n", ans);

    return 0;
}