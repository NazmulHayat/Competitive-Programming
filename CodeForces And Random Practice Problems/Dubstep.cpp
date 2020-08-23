#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,m,n;
    char a[205],b[205];
    while(scanf("%s",a)!=EOF)
    {
        k=0;j=0;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
            {
                i=i+2;
                if(j==1)
                    printf(" ");
                    j=0;
            }
            else{
                    j=1;
                printf("%c",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
