#include <stdio.h>


int main() {

int a,b;
long long int c;
scanf("%d",&a);
c=1;
if(a==0)
printf("1\n");
else{
for (b=1;b<=a;b++)
{
c=c*3;
}
printf("%lld\n",c);
}

    return 0;
}
