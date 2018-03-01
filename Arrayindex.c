#include<stdio.h>
int nain()
{
 int i=0,n,p=-1;//if the number is not found im the array -1 will be printed.
 int a[50];
 printf("enter the number");
 scanf("%d",&n);
 printf("enter the array of numbers");
 while(scanf("%d",&a[i]))
 {
  if(n==a[i])
  {
   p=i;
   break;
  }
  i++;
 }
 printf("%d",p);
}
  
  
 
