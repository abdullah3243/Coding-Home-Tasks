#include <stdio.h>

void temperature(float _temperature);

int main()
{
    float temperature;
    scanf("%lf", &temperature);
    temperature(temperature);
    return 0;
}

void temperature(float _temperature)
{
    if (_temperature >= 0 && _temperature <= 25)
    {
        printf("Freezing\n");
    }
    else if (_temperature >= 26 && _temperature <= 35)
    {
        printf("Boiling\n");
    }
    else if (_temperature >= 36 && _temperature <= 50)
    {
        printf("Cool\n");
    }
    else if (_temperature >= 51 && _temperature <= 60)
    {
        printf("Mild\n");
    }
    else if (_temperature >= 61 && _temperature <= 70)
    {
        printf("Warm\n");
    }
    else
    {
        printf("Hot\n");
    }
}