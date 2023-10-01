#include<stdio.h>
struct Mahafuj{
int id;
float cg;
char name[20];
};
int main(){
struct Mahafuj s;

scanf("%d", &s.id);
scanf("%f", &s.cg);
scanf("%s", &s.name);
printf("Name: %s ", s.name);
printf("Id: %d ", s.id);
printf("Your CG: %f", s.cg);
}
