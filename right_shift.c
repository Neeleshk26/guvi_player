#include <stdio.h>

int main()
{
    int n,k,a[10],i,t,j;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<k;j++){
        t=a[n-1];
        for(i=n-1;i>=0;i--){
            a[i+1]=a[i];
        }
        a[0]=t;
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}
