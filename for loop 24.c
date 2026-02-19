#include <stdio.h>
int main()
{
    int n;
    int calls;
    int totalcalls=0;
    int overloadedhours=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&calls);
        totalcalls+=calls;
        if(calls>40)
        {
            overloadedhours++;
        }
    }
    printf("Total Calls: %d\n",totalcalls);
    printf("Overloaded Hours: %d\n",overloadedhours);
    return 0;
}
