#include<stdio.h>
int main()
{
int n,i,k,p=0,o,c=0;
c++;
printf("enter the length of array");
scanf("%d",&n);
c++;
int a[n];
for(i=0;i<n;i++)
{
printf("enter the elements");
scanf("%d",&a[i]);
c++;
}c++;
printf("enter the element to be searched");
scanf("%d",&k);
c++;
for(i=0;i<n;i++)
{
if(a[i]==k)
{
p=p+1;
o=i+1;
c++;
}

}c++;
if(p==1)
{
printf("element found at position %d",o);
printf("\n time complexity %d",c);
printf("\n space complexity %d",24+4*n);
}
else
{
printf("element not found");
}
return 0;
}

