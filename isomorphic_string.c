
#include <stdio.h>
#include<string.h>
int main()
{
    char p[10];
    char q[10];
    gets(p);
    gets(q);
    int l,i=0,f=0;
    l=p[0]-q[0];
    while(p[i]!='\0'){
        if(p[i]-q[i]==l){
            f=1;
            i++;
        }
        else{
            f=0;
            break;
        }
    }
    if(f==1)
        printf("isomorphic");
    else
        printf("not isomorphic");

    return 0;
}
