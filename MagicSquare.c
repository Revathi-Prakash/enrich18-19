#include <stdio.h>
int magicSquare(int n)
{
   int i,j,c,sqr;
   int a[10][10]={0};
   sqr=n*n;
   i=0;
   j=n>>1;
   //printf("%d",j);
   for(c=1;c<=sqr;c++)
   {
       
      if(a[i][j]==0)
      {
          a[i][j]=c;
          i=i-1;
          j=j+1;
      }
      else
      {
          while(a[i][j]!=0)
          {
              i++;
          }
          a[i][j]=c;
      }
      if(i<0)
      {
          i=n-1;
      }
      if(j==n)
      {
          j=0; 
      }
   }
  for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
}
int main ()
{
  int n;
  printf ("Enter the n value");
  scanf("%d",&n);
  if(n<=0)
  {
      printf("value of n should greater than zero");
      return 0;
  }
  magicSquare(n);
  return 0;
}
