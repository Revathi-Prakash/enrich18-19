// string compression.
#include <stdio.h>
#include<string.h>
int compress(char s[])
{
    int i,j,count=1,len;
    len=strlen(s);
    while(i<len)
    {
        j=i+1;
        count=1;
        while(s[i]==s[j] && j<len)
        {
            count++;
            j++;
        }
       
        if(count>1)
        {
         printf("%c%d",s[i],count);
         i=j;      // i is assigned to the index value where the character is not equal to the character in the previous index. 
        }
        
    }
    
    return 0;
}
int main()
{   char s[100];
    printf("Enter the string");
    scanf("%s",s);
    compress(s);
    return 0;
}
