#include <stdio.h>

int main() {
    double b,c,d;
    int a;
    for(int i=1;;i++)
    {
        scanf("%d",&a);
        if(a==0)
        break;
        scanf("%lf %lf",&b,&c);
        d=sqrt(b*b+c*c);
        if(d<=a*2)
        printf("Pizza %d fits on the table.\n",i);
        else
        printf("Pizza %d does not fit on the table.\n",i);
    }

    return 0;
}
