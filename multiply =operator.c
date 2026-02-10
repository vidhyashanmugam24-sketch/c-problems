#include <stdio.h>

int main()
{
    int a=4,b=5;
    printf("%d\n",a*=b);
    int c=3,d=3;
    printf("%d\n",c*=d);
    int e=10,f=2;
    printf("%d",e*=f);
    
    return 0;
}