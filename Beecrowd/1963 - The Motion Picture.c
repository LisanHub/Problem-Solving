#include <stdio.h>

int main() {

    double a,b,c;
    scanf("%lf %lf",&a,&b);
    c=(b-a)*100/a;
    printf("%.2f%%\n",c);

    return 0;
}
