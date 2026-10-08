#include<stdio.h>
int main ()
{
int price;
float discount,discount_bill,final_bill;
scanf("%d",&price);
scanf("%f",&discount);
discount_bill=(discount/100)*price;
final_bill=price-discount_bill;
printf("%.2f",final_bill);
return 0;
} 
