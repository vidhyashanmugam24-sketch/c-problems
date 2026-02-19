#include <stdio.h>
int main()
{
    int n;
    int units;
    int totalunits=0;
    int spikehours=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &units);
        totalunits += units;
        if(units > 5)
        {
            spikehours++;
        }
    }
    printf("Total Units: %d\n",totalunits);
    printf("Spike Hours: %d\n",spikehours);
    return 0;
}
