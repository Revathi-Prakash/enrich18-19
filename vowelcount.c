#include <stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char s[200],vowel[5]={'a','e','i','o','u'};
    int count[5]={0};
    printf("enter the number of elements in the array");
    scanf("%[^\n]s",s);
    l=strlen(s);
    
    for(i=0; i<l; i++)
    {
        if(s[i]=='a' || s[i]=='A')
        {
            count[0]++;
        }
        else if(s[i]=='e' || s[i]=='E')
        {
            count[1]++;
        }
        else if(s[i]=='i' || s[i]=='I')
        {
            count[2]++;
        }
        else if(s[i]=='o' || s[i]=='O')
        {
            count[3]++;
        }
        else if(s[i]=='u' || s[i]=='U')
        {
            count[4]++;
        }
    }
    for(i=0; i<5; i++)
    {
        if(count[i]>0)
        {
            printf("%c-->%d\n",vowel[i],count[i]);
        }
    }
}
    


