
#include <stdio.h>
int checkpalindrome(int n);
int reverse(int n)
{
    int a=n,rev=0,t;
    while(a>0)
    {
        t=a%10;
        rev=(rev*10)+t;
        a=a/10;
    }
    return rev;
}
int checkpalindrome(int n)
{
    if(reverse(n)==n)
    {
        printf("%d",n);
    }
    else
    {
        n=n+1;
        checkpalindrome(n);
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    /*
    to print the next immediate palindrome number even
    if the number itself is a palindrome 
    */
    checkpalindrome(n+1);
    
    return 0;
}
    
