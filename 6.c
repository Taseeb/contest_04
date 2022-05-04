#include<stdio.h>
#include<string.h>

int main()
{
    int n,k; scanf("%d %d",&n,&k); int r=0;

    for(int i=1;i<=k;++i)
    {
        r = n%10;
        if(r==0) {n = n/10;}
        else {n--;}
    }

    printf("%d",n);

    return 0;
}