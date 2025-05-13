#include <stdio.h>
 
int main() {
 
    int x,y,z,count,temp;
    count=0;temp=0;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d",&y);
        z=y%3;
        temp+=y;
        count+=z;
    }
    printf("%d\n",temp-count);
 
    return 0;
}
