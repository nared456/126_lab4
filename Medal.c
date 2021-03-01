#include <stdio.h>
int main()
{
    int n,i=0,j,max=0,min=2000,lmx=0,lmn=0,sum=0;
    scanf("%d", &n);
    int rank[n][3];
    for (i=0; i<n; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&rank[i][j]);
        }
    }
    for(i=0;i<n-2;i++)
    {
        for(j=i;j<i+3;j++)
        {
            sum += (rank[j][0]*4)+(rank[j][1]*2)+(rank[j][2]*1);
        }
        if(max<sum)
        {
            max=sum;
            lmx = i+1;
        }
        if(min>sum)
        {
            min=sum;
            lmn = i+1;
        }
        sum=0;
    }
    printf("%d %d",lmx,lmn);
}