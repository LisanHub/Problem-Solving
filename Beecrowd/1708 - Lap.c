#include <stdio.h>
 
int main() {
    
int a,b;
scanf("%d %d",&a,&b);
for(int i=1;i>0;i++)
{
    if(a*i<=b*(i-1))
    {
        printf("%d\n",i);
        break;
    }
}
 
    return 0;
}
