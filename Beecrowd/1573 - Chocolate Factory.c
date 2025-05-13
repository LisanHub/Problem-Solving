#include <stdio.h>

int main() {

int a,b,c,d,x;
while(1){
scanf("%d %d %d",&a,&b,&c);
if(a==0&&b==0&&c==0)
    break;
d= a*b*c;
x=(int)cbrt(d);
printf("%d\n",x);
}

    return 0;
}
