#include<stdio.h>
int main()
{
     int a;
     float DA,HRA,g;
     scanf("%d",&a);

     if(a<=10000)
     {
         DA=(0.8)*a;
         HRA=(0.2)*a;
         g=a+DA+HRA;
         printf("%.2f",g);
     }
       else if(a<=20000)
     {
         DA=(0.9)*a;
         HRA=(0.25)*a;
         g=a+DA+HRA;
         printf("%.2f",g);
      // printf("%.2f",g);
     }
        else if(a>20000 )
     {
         DA=(0.95)*a;
         HRA=(0.3)*a;
         g=a+DA+HRA;
         printf("%.2f",g);
        // printf("%.2f",a+DA+HRA);
     }
}