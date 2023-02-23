#include<stdio.h>
int main()
{
int i,j,n;
struct poly
{
int exp,coef;
}x[10];
printf("enter the number of terms");
scanf("%d",&n);
printf("enter the coefficients of exponents of polynomial\n");
for(i=0;i<n;i++)
{
scanf("%d",&x[i].coef);
scanf("%d",&x[i].exp);
}
printf("the polynomial representation of first polynomial is\n");
for(i=0;i<n-1;i++)
{
printf("%d*x^%d+",x[i].coef,x[i].exp);
}
printf("%d*x^%d",x[n-1].coef,x[n-1].exp);
return 0;
}
