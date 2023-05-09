#include<stdio.h>
int main()
{
    int age,marks;
    printf("if your entered age is not my fav number then i will give you chance to go in silver city\n");

    printf("enter your age \n");
    scanf("%d", &age);
    
    printf("enter your marks \n");
    scanf("%d", &marks);
    
    switch (age)
    {
    case 6:
        printf("you may go to hell\n");
         switch (marks)             
         {
         case 10:
             printf("your marks is really not good");
             break;
         
         default:
             break;
         }
        break;
    case 10:
        printf("you may go to heaven\n");
        break;
    case 19:
        printf("you may go to at my home\n");
        break;
    default:
    printf("welcome to the silver city\n");
        break;
    }

    return 0;
}