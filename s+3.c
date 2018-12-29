
#include <stdio.h>

int main()
{
    char s[20];
    gets(s);
    int i;
    while(s[i]!='\0'){
        s[i]=s[i]+3;
        i++;
    }
    printf("%s",s);

    return 0;
}
