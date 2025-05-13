#include <stdio.h>

int main() {
    int a,b,c,d,p,q,w,x,y,z;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b){
    y=a;x=b;
    }
    else{
    x=a;y=b;
    }
    if(c>d){
    q=c;p=d;
    }
    else{
    p=c;q=d;
    }
    if(y<=q){
    w=y;
    }
    else{
        w=q;
    }
    z=x+p;
    if(w<=z)
    printf("%d\n",w*w);
    else
    printf("%d\n",z*z);

    return 0;
}
