#include<stdio.h>
#include<string.h>

int main()
{
    int k,n,w; scanf("%d %d %d",&k,&n,&w); int total = 0;

    for(int i=1;i<=w;++i)
    {
        total = total + i*k;
    }

    (total<=n)? printf("%d",0) : printf("%d",total-n); 

    return 0;
}