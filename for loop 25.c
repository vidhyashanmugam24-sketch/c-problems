#include <stdio.h>
int main()
{
    int n;
    int heartrate;
    int maxheartrate=0;
    int dangercount=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &heartrate);
        if(i == 0)
        {
            maxheartrate = heartrate;
        }

        if(heartrate > maxheartrate)
        {
            maxheartrate = heartrate;
        }
        if(heartrate > 140)
        {
            dangercount++;
        }
    }
    printf("Max Heart Rate: %d\n",maxheartrate);
    printf("Danger Readings: %d\n",dangercount);
    return 0;
}
