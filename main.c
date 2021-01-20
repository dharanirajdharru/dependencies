#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void insertionsort(int a[],int );
void selectionsort(int a[],int );
void bubblesort(int a[],int );
void divide(int a[],int ,int);
void quicksort(int a[],int ,int);

int main(int argc,char *argv[])
{
clock_t t1,t2,t3,t4,t5;
int i,n=argc,a[n];
//printf("\nenter the size of an array:");
//scanf("%d",&n);
int c[n],d[n];
for(i=1;i<n;i++)
{
 c[i]=d[i]=a[i]=atoi(argv[i]);
}
t1 = clock();
selectionsort(a,n);
t1 = clock() - t1; 
double time_taken1 = ((double)t1)/CLOCKS_PER_SEC;

t2 = clock();
quicksort(c,0,n-1);
printf("\n quicksort array is:");
for(i=0;i<n;i++)
 printf("%d ",c[i]);
t2 = clock() - t2; 
    double time_taken2 = ((double)t2)/CLOCKS_PER_SEC;

t3 = clock();
bubblesort(a,n);
t3 = clock() - t3;
double time_taken3 = ((double)t3)/CLOCKS_PER_SEC;

t4 = clock();
insertionsort(a,n);
t4 = clock() - t4;
double time_taken4 = ((double)t4)/CLOCKS_PER_SEC;

t5 = clock();
divide(d,0,n-1);
printf("\n mergesort array is:");
for(i=0;i<n;i++)
 printf("%d ",d[i]);
t5 = clock() - t5;
double time_taken5 = ((double)t5)/CLOCKS_PER_SEC;

printf("\n time taken by each sortingtechnique:");
printf("\n selectionsort:%f",time_taken1 );
printf("\n quicksort:%f",time_taken2 );
printf("\n bubblesort:%f",time_taken3 );
printf("\n insertionsort:%f",time_taken4 );
printf("\n mergesort:%f\n",time_taken5 );
}
