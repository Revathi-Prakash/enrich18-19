#include <stdio.h>
int main()
{
  int a[50],num,i,count=0;    
  printf("Enter the decimal number");    
  scanf("%d",&num); 

  for(i=0;num>0;i++)    
  {    
     a[i]=num%2;    
     num=num/2;    
  } 

  for(i=i-1;i>=0;i--)    
  {    
    if(a[i]==1)
    {
        count++;
    }
  }
printf("%d",count);
return 0;  
}  
