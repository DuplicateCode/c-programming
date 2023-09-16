#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x % 2 == 0) // if number mod == 0 that is even number
    {
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }
    return 0;
}
