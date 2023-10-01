#include<stdio.h>

int mahafuj(x, y){
int sum = x + y;
return sum;
}
int main(){
printf("main function start\n");
int result = mahafuj(20, 30);
printf("Total = %d\n", result);
}
