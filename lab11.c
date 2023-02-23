#include<stdio.h>
void insertionSort(int *a,int n)
{
    int key,j;
    for(int i=1;i<=n-1;i++)
    {
       key=a[i];
       j=i-1;
       //loop for each pass
       while(j>=0 && a[j]>key)
       
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=key;
    }

}
void printArray(int *a,int n)
{
    printf("sorted array");
    for(int i=0;i<n;i++)
    {
        printf("%d   ",a[i]);
    }
    printf("  ");
}
int main()
{
   
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
     int a[n];
    for(int b=0;b<n;b++)
    {
        printf("enter element");
        scanf("%d",&a[b]);
    }
    printf("unsorted array");
    for(int b=0;b<n;b++)
    {
        printf("%d  ",a[b]);
    }
    printf("\n");
    insertionSort(a,n);
     printArray(a,n);
   return 0; 
}
