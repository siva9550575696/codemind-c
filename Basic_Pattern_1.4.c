#include<stdio.h>
int main()
{
    int i,j,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("%c ",64+j);
        }
     printf("
");   
    }
}