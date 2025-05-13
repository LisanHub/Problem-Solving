#include <stdio.h>
#include<math.h>

int main() {

double a,b,c,d,x;


while(1)
{
scanf("%lf",&a);
if(a==0)
    break;

b=floor(a/90);
c=ceil(a*7/90);


printf("Brasil %.0f x Alemanha %.0f\n",b,c);
}


    return 0;
}
