//Take one person age as input and print his status.
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age: \n");
    scanf("%d", &age);
    if(age < 2)
    {
        printf("Status: Infant\n");
    }
    else if(age >= 2 && age < 10)
    {
        printf("Status: Child\n");
    }
    else if(age >= 10 && age < 20)
    {
        printf("Status: Teenager\n");
    }
    else if(age >= 20 && age < 30)
    {
        printf("Status: Adult\n");
    }
    else if(age >= 30)
    {
        printf("Status: Old\n");
    }
    return 0;
}
