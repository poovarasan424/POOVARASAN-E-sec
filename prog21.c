#include<stdio.h>
int main()
{
int a,b,c,greater;
printf("enter a number");
scanf("%d%d%d",&a,&b,&c );
if(a>b&&a>c)
{
 greater=a;
}
else if(b>c)
{
 greater=b;
}
else
{
 greater=c;
}
printf("greater number=%d",greater);
return 0;
}
