#include<stdio.h>
//representation of the decimal number with the given base 
int convertbase(int num,int base)
{
    int rem[10],temp=0,i=0;
    while(num>0)
    {
        rem[i]=num%base;                    
        num=num/base;
        i++;
    }
    i--;
    while(i>=0)
    {
        temp=rem[i]+temp*10;         
        i--;
    }
    printf("%d",temp);
    return 0;
}

int main()
{
    int num,base;
    printf("Enter the decimal number");
    scanf("%d",&num);
    printf("Enter the base");
    scanf("%d",&base);
    if(base<0)
    {
        printf("base of the number should be positive");
        return 0;
    }
    if(num==0)
    {
        printf("%d",num);
        return 0;
    }
    convertbase(num,base);
    return 0;
}
