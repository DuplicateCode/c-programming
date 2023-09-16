#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    float avg = (a+b+c)/3.0;
    printf("Value of a:%d\n",a);
    printf("Value of b:%d\n",b);
    printf("Value of c:%d\n",c);
    printf("Avarage of a, b, and c:%.2f\n",avg);
    return 0;
}