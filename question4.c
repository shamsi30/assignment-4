#include<stdio.h>
int main()
{
    int x=1;
    while(x<=20)
    {
        if(x%2!=0)
            printf("%d\t",x);
            x++;        
    }
    return 0;
}