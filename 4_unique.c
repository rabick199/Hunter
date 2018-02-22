#include<stdio.h>
void main()
{
    int a[100],n,i,j,count=0;
    printf("Enter the number N:");
    scanf("%d",&n);
    printf("\n Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n The repeated Numbers are:");
    for(i=0;i<n-1;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==0)
        {
           printf("%d\t",a[i]); 
        }
    }
}
