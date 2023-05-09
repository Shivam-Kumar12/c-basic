#include<stdio.h>
int main()
{
    int a[5];
printf("print value of array : \n");
    for (int i = 0; i < 6 ;i++)
         {
             scanf("%d", &a[i]);
         }
    
printf("print the value of array:\n");
    for (int i = 0; i < 5; i++)
          {
            /* code */printf("%d", a[i]);
          }
        
    
return 0;
}