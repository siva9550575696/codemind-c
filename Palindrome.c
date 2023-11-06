#include<stdio.h>
int main()
{
    int a,rev=0,b,c;
    scanf("%d",&a);
      c=a;
    while(a>0)
    {
        b=a%10;
        rev=rev*10+b;
        a=a/10;
    }
    if(rev==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}