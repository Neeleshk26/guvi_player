#include <stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i=0;
    gets(s);
    if(s[0]>='a'&&s[0]<='z')
        s[0]=s[0]-32;
    while(s[i]!='\0'){
        if(s[i]==' '&& s[i+1]>='a' && s[i+1]<='z')
            s[i+1]=s[i+1]-32;
        i++;
    }
    printf("%s",s);
    return 0;
}
