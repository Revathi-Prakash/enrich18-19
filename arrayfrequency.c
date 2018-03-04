
#include <stdio.h>

int main()
{
    int i,n,j,t=1;
    int a[50],count[50]={0};
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("Enter the array elements");
    
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        t=1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j] && a[j]!=-1)
            {
                t++;
                a[j]=-1;           
            }
        }
        count[i]=t;
    }
    
    for(i=0; i<n; i++)
    {
        if(a[i]!=-1)
        {
            printf("%d-->%d\n",a[i],count[i]);
        }
    }
    return 0;
}

/*
since  input contains only positive numbers the counted elements are  assigned to -1,to avoid the dupilacte count.
 */
