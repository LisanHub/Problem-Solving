#include <stdio.h>

int main() {

    double x,y,a,b,c;
    while(scanf("%lf",&x)!=EOF&&scanf("%lf",&y)!=EOF)
    {
        a=y/2;
        b=x/(3.14*a*a);
        c=3.14*a*a;
        printf("ALTURA = %.2f\n",b);
        printf("AREA = %.2f\n",c);
    }

    return 0;
}
