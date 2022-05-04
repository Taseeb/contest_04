#include<stdio.h>
#include<string.h>

int main()
{
    int N,M;scanf("%d %d",&N,&M); char *str;

    if(1<=N && N<=100 && M>=0 && M<=N)
    {
        if(N==M) {str = "AC";} 
        else {str = "00";}
        
    }
    

    strcmp(str,"AC")==0? printf("Yes") : printf("No");

    return 0;
}