#include<stdio.h>

int add(int s1, int s2,int s3)
{
    int addition = s1 + s2 + s3;
    printf("Addition =  %d\n", addition);
    return addition;

}
int mul(int s1, int s2,int s3)
{
    int multiplication = s1 * s2 * s3;
    printf("multiplication =  %d\n", multiplication);
    return multiplication;
}

int div(int s1, int s2)
{
    int division = s1 / s2;
    printf("division =  %d\n", division);
    return division;
}


int sub(int s1,int s2,int s3)
{
    int substraction = s1 - s2 - s3;
    printf("subtraction =  %d\n", substraction);
    return substraction;
}
int sum(int addition, int multiplication, int division, int subtraction)
{
    int total = addition + multiplication + division + subtraction;
    printf("Total = %d\n", total);
    return total;
}
int evenOdd(totalSum)
{
    if(totalSum % 2 == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
}

int subtractionTable(totalSum){
int reduce = totalSum / 10;
    int i, count = 0;
    for(i = 1; i <= 10; i++)
    {

        count = i * reduce;
        printf("%d x %d = %d\n", i, reduce, count);
    }

}


int main()
{
    int a, b, c;
    printf("Enter the number");
    scanf("%d%d%d", &a, &b, &c);
    int additionResult = add(a, b, c);
    int multiplicationResult = mul(a, b,c);
    int divisionResult = div(a,b);
    int subtractionResult = sub(a,b,c);
    int totalSum = sum(additionResult, multiplicationResult, divisionResult, subtractionResult);
    evenOdd(totalSum);
    subtractionTable(totalSum);
    return 0;
}
