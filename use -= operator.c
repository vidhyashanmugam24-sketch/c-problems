#include <stdio.h>

int main()
{
    int a=10,b=5;
    printf("%d\n",a-=b);
    int c=20,d=10;
    printf("%d\n",c-=d);
    int e=5,f=5;
    printf("%d",e-=f);
    
    return 0;
}