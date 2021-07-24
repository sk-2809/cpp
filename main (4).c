#include <stdio.h>

int main()
{
    double a,b,c;
    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    c=a*b;
    printf("c=%.10lf",c);
    return 0;
}
