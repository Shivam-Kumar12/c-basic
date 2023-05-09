#include<stdio.h>
int main()
{   
    int nik,i,a[10],dlte,pos;
    printf("enter the size of array:");
    scanf("%d", &nik);
     for ( i = 0; i < nik; i++)
     {
         /* code */
         printf("\na[%d]=",i);
         scanf("%d",&a[i]);
     }
    
    printf("enter the value you want to dlt=");
    scanf("%d",&dlte);
    for ( i = 0; i < nik; i++)
    {
        /* code */
        if (a[i]==dlte)
        {
         printf("a[%d]=0",i);
            
            
        }
    }
     printf("updated array is=");
     for ( i = 0; i < nik; i++)
     {
         /* code */printf("\na[%d]=",i);
       scanf("%d",a[i]);
     }
    
    return 0;
}