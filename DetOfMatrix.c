
#include <stdio.h>
float DetOfMat(int flag,int n,float a[n][n])
{
    int i,j,k,m;
	float c,det=1;
	   
	for(i=0; i<n; i++)
    {
	    for(j=0; j<i; j++)
	    {
            c= a[i][j]/a[j][j];
            for(k=0;k<n;k++)
            {
                a[i][k]=a[i][k]-(c*a[j][k]);
	        }
	    }
	}
    /* when flag=1,it indicates that interchange of rows.
    When two rows of a matrix are interchanged then the  determinant of
    the resultant matrix is equal to (-1*determinant) of the matrix.*/

    for(i=0; i<n; i++)
    {
        if(a[i][i]!=0) 
        {
            det=det*a[i][i];
        }
    }
    
    if(flag==1)
    {
        det=det*(-1);
    }
    return det;
}

int main() 
{
	    
	int n,i,j,temp,flag=0;
	printf("Enter the order of the matrix");
	scanf("%d",&n);
	float a[n][n],det;
	printf("Enter the elements of the matrix");
	for(i=0; i<n; i++)
    {
	    for(j=0; j<n; j++)
	    {
	        scanf("%f",&a[i][j]);
	    }   
        
    }
	j=0;
	if(a[0][0]==0)
	{
	    for(i=0; i<n; i++)
	    {
	        if(a[i][j]!=0)
	        {
	           flag=!flag;    //if even number of rows are interchanged then the determinant value will not change.
	           break;
	        }
	    }
	    
	    for(j=0; j<n; j++)
	    {
	        temp=a[i][j];
	        a[i][j]=a[0][j];
	        a[0][j]=temp;
	    }
    
    }
    det=DetOfMat(flag,n,a);
    printf("%0.f",det);
	    return 0;
	}

