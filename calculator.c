#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double addition()
{
    double nr1, nr2;
    scanf("%lf%lf", &nr1, &nr2);
    return nr1+nr2;
}

double subtraction()
{
    double nr1, nr2;
    scanf("%lf%lf", &nr1, &nr2);
    return nr1-nr2;
}

double multiplication()
{
    double nr1, nr2;
    scanf("%lf%lf", &nr1, &nr2);
    return nr1*nr2;
}

double division()
{
    double nr1, nr2;
    scanf("%lf%lf", &nr1, &nr2);
    return nr1/nr2;
}

double squareRoot()
{
    double nr;
    scanf("%lf", &nr);
    return sqrt(nr);
}

double power()
{
    int nr1, nr2;
    scanf("%d%d", &nr1, &nr2);
    return pow(nr1, nr2);
}

double operationType (char o)
{
    if (o=='+')
        return addition();
    else if (o=='-')
        return subtraction();
    else if (o=='*')
        return multiplication();
    else if (o=='/')
        return division();
    else if (o=='s')
        return squareRoot();
    else if (o=='^')
        return power();
    else
        return 0;

}
int main()
{
    double result;
    char opera;
    scanf("%c", &opera);
    result=operationType(opera);
    printf("%.2lf", result);
    return 0;
}
