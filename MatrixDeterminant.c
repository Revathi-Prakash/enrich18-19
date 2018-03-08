#include <stdio.h>
int main()
{
    int n,i,j,m;
    printf("Enter the order of the square matrix");
    scanf("%d",&n);
    float c=0,det=1;
    int a[20][20];
    printf("Enter the matrix elements");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    
    /* the determinant of the upper triangular matrix is equal 
    to the determinant of the given matrix*/
    
    for(i=1;i<n;i++) 
    {
        for(j=0;j<i;j++)
        {
            c = ((float) a[i][j] / a[j][j]);     
			      
            for(m=0; m<n; m++)
            {
                a[i][m]=a[i][m] - (c*a[j][m]);
            }
        }
    }
    
    for(i=0;i<n;i++) 
    {
       det=det*a[i][i];
    }
    
    printf("%.0f",det);
    return 0;
}
