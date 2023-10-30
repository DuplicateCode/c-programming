#include<stdio.h>
void lisLength(int sequence[],int n)
{
    int i,j,lis[n];
    for(i=0;i<n;i++)
    {
        lis[i]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(sequence[j]<sequence[i])
            {
                if(lis[i]<lis[j]+1)
                {
                    lis[i]=lis[j]+1;
                }
            }
        }
    }
    int max=lis[0];
    for(i=0;i<n;i++)
    {
        if(lis[i]>max)
        {
            max=lis[i];
        }
    }
    printf("LIS = %d\n",max);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int sequence[n];
    printf("Enter Array Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&sequence[i]);
    }
    lisLength(sequence,n);
}
