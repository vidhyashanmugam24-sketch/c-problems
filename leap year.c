#include <stdio.h>
int main() {
    int num=2024;
    if((num%4==0&&num%100!=0)||num%400==0){
        printf("Leap year");
    }
    else {
        printf("Not a Leap year");
    }
    return 0;
}
    