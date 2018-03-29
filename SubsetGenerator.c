#include <stdio.h>
int compute(int a[],int b[],int n, int sub,int k,int i);
int display(int a[], int n, int sub)
{
    int b[100];
    /*
     For any value of n there will be 2^n subsets including the empty set.
     Initially the subset size is 1,printing the singleton subsets and subset
     size will be increased .
    
     */
    while(sub<=n)
    {
        compute(a,b, n,sub, 0, 0); 
        sub++;
    }
    return 0;
}

int compute(int a[],int b[],int n, int sub, int k,int i)
{
    int j;
    
    if (k==sub) 
    {
        for (j=0;j<sub;j++)
        {
            printf("%d ",b[j]);
            if(sub>1 && j<sub-1)
            {
                printf(",");              // Numbers between first and last elements of the subset is separated by ','
            }
        }
        
        printf("\n");
        return 0;
    }
    if(i>=n)
    {
        return 0;
    }
        
    b[k] = a[i]; 
    compute(a,b,n,sub, k+1, i+1); // element is included to b array,indices of both arrays will be incremented.
    compute(a,b,n,sub, k, i+1);
}

int main()
{
    int a[100],n,sub=1,i;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    display(a,n,sub);
    return 0;
}
