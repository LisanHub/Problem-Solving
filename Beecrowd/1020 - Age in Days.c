#include <stdio.h>
 
int main() {
 
int a,b,c,d;
scanf("%d",&a);
b=a/365;
c=(a%365)/30;
d=(a%365)%30;
printf("%d ano(s)\n",b);
printf("%d mes(es)\n",c);
printf("%d dia(s)\n",d);
 
    return 0;
}
