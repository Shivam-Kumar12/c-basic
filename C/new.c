#include<stdio.h>
#include<conio.h>
int main ()
{
    int n,j,m,g;
    printf("enter the height of tree \n");
    scanf("%d", &n);
   
    for(int i=1;i<=n;i++)
    {
        
            for(int j=i;j<=n;j++)
             {
                 printf(" ");
             }
             for(int k=1;k<=(2*i-1);k++)
             {
                 printf("%c", '*');
             }
      printf("\n");
    }
    int pole;
    
        for(int i=;i<=4;i++)
           {
              
                 for(int d=i;d<=(n-1);d++)
             {
                 printf(" ");
             }
               for(int k=1;k<=3;k++)
             {
                 printf("%c", '*');
             }
             printf("\n");
           }
        
return 0;
}