
#include <stdio.h>
#include<string.h>
int displayString(char s[],int ipos,int maxlen);
int substring(char s[]);

int substring(char s[])
{
    int i,j,l,ipos,maxlen=0,len;
    int t;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(s[i]==s[j])         // the first repeating character is found.
            {
                t=j;
                break;
            }
        }
        len=j-i;                   // distance between the character and its repetition
        if(len>maxlen)             // to find longest substring wih first occurence in he string.
        {
            maxlen=len;
            len=0;
            ipos=i;
        }
    }
    displayString(s,ipos,maxlen);
    return 0;
    
}

int displayString(char s[],int ipos,int maxlen)
{
    int i;
    for(i=ipos;i<=maxlen;i++)   // i=ipos+1 will print the given output.
    {
        printf("%c",s[i]);
    }
    return 0;
}
int main()
{
    char s[100];
    printf("Enter the string");
    scanf("%s",&s);
    substring(s);
    return 0;
}
