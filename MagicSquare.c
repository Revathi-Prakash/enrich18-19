#include<stdio.h>
int magicSquare(int n)
{
    int c,a[10][10]={0};
    int sqr= n*n,i,j,x,y;
    i= 0;
    j= n>>1;                      
    for (c= 1; c<=sqr; c++) 
    {
        a[i][j] = c;

        x= i-1;                   // x is decremented to point the row above the current row
        y= j+1;                  // y is decremented to point the next column
        if(x<0)
        {
            x=n-1;
        }
        if(y==n)
        {
            y=0;
        }
                                  //if the cell already contains a number then move to the cell which is immediate down.
        if(a[x][y]!=0)  
        {
           x=i+1;
           y=j;
           if(i+1==n)
            {
              i=0;
            }
    
        }
        i=x;
        j=y;
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
 int main()
 {
     int n;
     printf("Enter n value");
     scanf("%d",&n);
     if(n<=0)
     {
         printf("Value of n should not be negative or zero");
         return 0;
     }
     magicSquare(n);
     return 0;
 }
