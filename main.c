#include <stdio.h>
#include <stdlib.h>

double areaCircle(int radius)
{
    return (double) radius*radius*3.141;
}

double perimeterCircle(int radius)
{
    return (double) 2*radius*3.141;
}

double areaOrPeri(char o)
{
    int r;
    scanf("%d", &r);
    if (o=='a')
        return areaCircle(r);
    else if (o=='p')
        return perimeterCircle(r);
    return 0;
}

int main()
{
    char aOp;
    scanf("%c", &aOp);
    double result = areaOrPeri(aOp);
    printf("%.2lf", result);
    return 0;
}
