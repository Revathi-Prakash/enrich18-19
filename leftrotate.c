#include <stdio.h>

int main()
{
    int num,n,temp;
    printf("enter the number to be left rotated");
    scanf("%d",&num);
    printf("enter the numberof times it has to be rotated");
    scanf("%d",&n);
    int a[50],b[50];
    int i,j,s=0;
    temp=num;
    while(temp>0)
    {
        b[s]=temp%10;
        temp=temp/10;
        s++;
    }
    j=0;
    for(i=s-1;i>=0;i--)
    {
        a[j]=b[i];
        j++;
    }
    for(i = 0; i <n; i++)
    {
        temp = a[0];
        for(j=0;j<s-1;j++)
        {
            a[j] = a[j+1];
        }
    a[s-1] = temp;   
    }

    for(i = 0; i <s; i++)
    {
    printf("%d", a[i]);
    }


    return 0;
}
