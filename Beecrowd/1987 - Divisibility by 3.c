#include <stdio.h>
 
int main() {
 
int a,b,x,sum,count;

while(scanf("%d %d",&a,&b)!=EOF){
sum=b;count=0;
while(a--)
{
    x=sum%10;
    count+=x;
    sum=sum/10;
}
if(count%3==0)
printf("%d sim\n",count);
else
printf("%d nao\n",count);
}
    return 0;
}
