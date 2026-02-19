#include <stdio.h>
int main()
{
    int n;
    int score;
    int totalrisk=0;
    int highriskCount=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&score);
        totalrisk+=score;
        if(score>50)
        {
            highriskCount++;
        }
    }
    printf("Total Risk: %d\n",totalrisk);
    printf("High Risk Sessions: %d\n",highriskCount);
    return 0;
}
