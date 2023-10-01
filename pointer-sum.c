#include<stdio.h>
int main(){
int a=10;
int b=50;
int c=40;

int *s1, *s2, *s3, sum;
s1 = &a;
s2=&b;
s3=&c;

sum = *s1 + *s2 + *s3;

printf("Total of pointer: %d", sum);

}
