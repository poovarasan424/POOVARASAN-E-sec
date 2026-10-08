#include<stdio.h>
int main()
{
int a,b,c,d,e;
float total,averagemark;
printf("enter a tamil");
scanf("%d",&a);
printf("enter a english");
scanf("%d",&b);
printf("enter a maths");
scanf("%d",&c);
printf("enter a science");
scanf("%d",&d);
printf("enter a social");
scanf("%d",&e);
total=a+b+c+d+e;
printf("%f",total/5);
return 0;
}
