#include<stdio.h>
int main()
{
    int i,j,a;
    scanf("%d",&a);
    for(j=1;j<=a;j++)
    {
        for(i=1;i<=a;i++)
        {
            printf("* ",i);
        }
        printf("
");
    }
    //printf("
");
}