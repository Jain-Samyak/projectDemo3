#include<stdio.h>
int main()
{
int a[10],sum=0,sum1=0,n,lar[3];
printf("no. of unknown");
scanf("%d",&n);
for(i=0;i<n;i++)
{
a[i]=insert();
}
sum=even(a[],n);
sum1=odd (a[]);
if(sum>sum1)
{
for(i=0;i<3;i++)
{
lar[i]=sum;
printf("%d",lar[i]);
}
}
}
