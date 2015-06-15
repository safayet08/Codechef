#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    char a[27],test[101],temp;
    scanf("%d",&T);
    scanf("%s",&a);
    for(int j = 1; j <= T; j++)
    {
        int i=0;
        scanf("%s",&test);
        temp = test[i];
        while(temp != '\0')
        {
            if(temp == '_')
                printf(" ");
            else if(temp >= 97 && temp <= 122)
                printf("%c",a[temp%97]);
            else if(temp >= 65 && temp <= 90)
                printf("%c",a[(temp%65)] - 32);
            else
                printf("%c",temp);
            i += 1;
            temp = test[i];
        }
        printf("\n");
    }
    return 0;
}
