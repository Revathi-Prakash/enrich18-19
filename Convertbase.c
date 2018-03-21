#include<stdio.h>
/*
The representation of decimal number with the given base is equivalent 
to representing the remainder obtained from dividing the given decimal number by the base.
*/
int convertbase(int num,int base)
{
    int rem,temp=0,i=1;
    while(num>0)
    {
        rem=num%base;  
        temp=temp+(i*rem);       //remainder at each iteration is multiplied with multiples of ten.
        num=num/base;
        i=i*10;      
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
