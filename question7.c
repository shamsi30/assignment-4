#include<stdio.h>
int main()
{
    int x=20;
    while(x>=1)
    {
        if(x%2==0)
            printf("%d\t",x);
        x--;
    }
    return 0;
}