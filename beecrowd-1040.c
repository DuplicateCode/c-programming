#include<stdio.h>
int main()
{
    float N1, N2, N3, N4, average;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4 );
    average = (N1 + N2 + N3 + N4) / 4;
    printf("Media: %0.1f\n", average);
    if(average >= 7.0)
    {
        printf("Aluno aprovado");
    }
    else if(average < 5.0)
    {
        printf("Aluno reprovado");
    }
    return 0;
}
