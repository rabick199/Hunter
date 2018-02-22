#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,j,l,rev,r;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    l=strlen(str);
    printf("The string is:");
    for(i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
           rev=i;
           while(rev!=0)
           {
              printf("%c",str[rev-1]);
              rev--;
           }
        }else if(i==l-1)
        {
            printf(" ");
            r=i;
            while(str[r]!=' ')
            {
                printf("%c",str[r]);
                r--;
            }
        }
    }
}
