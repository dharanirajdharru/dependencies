#include<stdio.h> 

//void bubblesort(int a[],int );
/*int main()
{
int i,n,a[20];
printf("\nenter the size of an array:");
scanf("%d",&n);
printf("\nenter array elements:");
for(i=0;i<n;i++)
 scanf("%d",&a[i]);

bubblesort(a,n);

printf("\n sorted array is:");
for(i=0;i<n;i++)
 printf("%d ",a[i]);
}*/

void bubblesort(int a[],int s)
{
int i,j,t;
for(i=0;i<s-1;i++)
{
 for(j=0;j<s-i-1;j++)
  {
   if(a[j]>a[j+1])
    {
      t=a[j];
      a[j]=a[j+1];
      a[j+1]=t;
    }
  }
}
printf("\n bubblesort array is:");
for(i=0;i<s;i++)
 printf("%d ",a[i]);

}
