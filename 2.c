#include<stdio.h>
#include<string.h>

int main()
{
    int n = 0; scanf("%d",&n); int X=0; char *str;

    if(1<=n && n<=150)
    {
        for(int i=1;i<=n;++i)
        {
            scanf("%s",str); 
            if(strcmp(str,"++X") == 0 || strcmp(str,"X++") == 0 )
            {
                X++;
            }
            if(strcmp(str,"--X") == 0 || strcmp(str,"X--") == 0 )
            {
                X--;
            }
        }
        printf("%d",X);

    }

    

    return 0;
}