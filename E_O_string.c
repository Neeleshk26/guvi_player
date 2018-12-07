#include <stdio.h>
#include<string.h>
int main()
{
    char s[10],t;
    int i=0;
    gets(s);
    while(s[i]!='\0'){
        if(i%2==0){
            if(s[i+1]=='\0'){
                t=s[i];
                s[i]=t;
            }
            else{
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }
        i++;
    }
    printf("%s",s);
    return 0;
}
