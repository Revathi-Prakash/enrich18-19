/*
sorting the array of strings based on their numerical value.
*/
#include <stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char a[50][50],t[20];
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((strlen(a[i])==strlen(a[j]) && strcmp(a[i],a[j])>0) || strlen(a[i])>strlen(a[j])) 
            
              {  strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%s\t",a[i]);
    }
    
    return 0;
}


