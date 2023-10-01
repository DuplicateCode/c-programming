#include<stdio.h>

int odd_even(){
int a;
printf("Enter the number\n");
scanf("%d", &a);
if(a % 2 == 0)
{
    printf("Even Number");
}
else{
    printf("Odd Number");
}
}

int sum(){
int x, y, add;
scanf("%d%d", &x, &y);
add = x + y;
printf("%d", add);
}

int main(){
  odd_even();
  sum();
}
