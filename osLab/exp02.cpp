#include <stdio.h>
int main()
{
    int i, j, t, n, wt[10] = {0}, bt[10] = {10}, tat[10] = {0}, p[10] = {0};
    float atat = 0, awt = 0;
    printf("enter the number of process\n");
    scanf("%d", &n);
    printf("enter the process");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p[i]);
    }
    printf("enter the brust time\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", bt[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j - i - 1; j++)
        {
            if (bt[j] > bt[j + 1])
            {
                t = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = t;

                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
        }
    }
    printf("process \t brust time \t waiting time \t turnaroundtime \n");
    for (i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;
        for (j = 0; j < n; j++)
        {
            wt[i] = wt[i] + bt[j];
        }
        tat[i] = wt[i] + bt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];
        printf("%d\t %d\t %d\t %d\n", p[i], bt[i], wt[i], tat[i]);
    }
    awt = awt / n;
    atat = atat / n;
    printf("average waiting time=%f", awt);
    printf("average turn around time=%f", atat);
    return 0;
}