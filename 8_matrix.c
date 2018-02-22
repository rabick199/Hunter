#include<stdio.h>
void main()
{
    int a[100],n,i,j,k;
    printf("Enter the number N:");
    scanf("%d",&n);
    printf("\n Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(a[i]+a[j]==a[k]&&(i<j)&&(j<k)&&(i<k))
                {
                    printf("%d %d %d\n",a[i],a[j],a[k]);
                }
            }
        }
    }
}
