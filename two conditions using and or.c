#include <stdio.h>

int main()
{
    int a=5;
    int b=10;
    printf("%d\n",(a&&b)||(a||b));
    int c=0,d=5;
    printf("%d\n",(c&&d)||(c||d));
    int e=0,f=0;
    printf("%d",(e&&f)||(e||f));
    return 0;
}