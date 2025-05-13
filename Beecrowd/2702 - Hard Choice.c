#include <stdio.h>
 
int main() {
 
int c1,c2,b1,b2,p1,p2,x,y,z,count;
count=0;
scanf("%d %d %d %d %d %d",&c1,&b1,&p1,&c2,&b2,&p2);
x=c2-c1;
y=b2-b1;
z=p2-p1;
if(x>0)
count+=x;
if(y>0)
count+=y;
if(z>0)
count+=z;
printf("%d\n",count);
 
    return 0;
}
