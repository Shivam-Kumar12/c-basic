#include<stdio.h>
int main()
{
    int age;
    printf("enter the number:-");
    scanf("%d", &age);
    
    if (age>=18)
    {
        printf("you can vote for AAP\n");
    }
    else if (age>=10)
    {
        printf("you can vote for kids\n");
    }
    
    else{
        printf("you can not vote\n");
    }
    return 0;
}