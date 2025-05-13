#include <stdio.h>
 
int main() {
 
int l,c,x,y;
scanf("%d %d",&l,&c);
x=(c*l)+(l-1)*(c-1);
y=(c-1)*2+(l-1)*2;
printf("%d\n%d\n",x,y);
 
    return 0;
}
