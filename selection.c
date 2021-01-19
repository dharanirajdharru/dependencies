#include<stdio.h> 

//void selectionsort(int a[],int );
/*int main()
{
int i,n,a[20];
printf("\nenter the size of an array:");
scanf("%d",&n);
printf("\nenter array elements:");
for(i=0;i<n;i++)
 scanf("%d",&a[i]);

selectionsort(a,n);

printf("\n sorted array is:");
for(i=0;i<n;i++)
 printf("%d ",a[i]);
}*/

void selectionsort(int a[],int s)
{
int i,j,t;
for(i=0;i<=s-1;i++)
{
 for(j=i+1;j<=s;j++)
  {
   if(a[i]>a[j])
    {
      t=a[i];
      a[i]=a[j];
      a[j]=t;
    }
  }
}
printf("\n selectionsort array is:");
for(i=0;i<s;i++)
 printf("%d ",a[i]);

}
