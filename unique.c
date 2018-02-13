#include<stdio.h>
void main()
{
    int a[100],i,j,n,count=0;
    printf("Enter the N:");
    scanf("%d",&n);
    printf("\n Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n The numbers are:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            printf("\n%d",a[i]);
        }
    }
}
