#include <stdio.h>

int main() {
    int i,sum=0,n;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(i%2==0){
        sum=sum+i;
    }
    }
        printf("%d ",sum);
    return 0;
}