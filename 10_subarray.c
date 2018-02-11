#include<stdio.h>
void main()
{
    int a[100],b[100],i,n,m,j,k,count=0;
    printf("Enter the n:");
    scanf("%d",&n);
    printf("Enter the array a:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the m:");
    scanf("%d",&m);
    printf("\n Enter the array b:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<m;k++)
        {
            if(b[k]==a[j])
            {
                count++;
            }
        }
    }
    if(count==i)
    {
        printf("Subarray");
    }
    else
    {
        printf("Not Subarray");
    }
}
