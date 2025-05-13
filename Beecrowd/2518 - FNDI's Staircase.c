#include <stdio.h>

int main() {

    int x;
    double h,c,l,y,z;
    while(scanf("%d",&x)!=EOF)
    {
        scanf("%lf %lf %lf",&h,&c,&l);
        y=sqrt(h*h+c*c);
        z=x*y*l;
        printf("%.4f\n",z/10000);
    }

    return 0;
}
