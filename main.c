#include <stdio.h>
#include <stdlib.h>
int sophiebul(int x);
int main()
{
    int i, j;
    int kontrol=0;
        for(i=2; i<=10000000000000000; i++)
        {
            kontrol = 0;
            for(j=2; j<=i/2; j++)
            {
                if( i % j == 0)
                {
                    kontrol = 1;
                    break;
                }
            }
            if(kontrol == 0)
                sophiebul(i);
        }
    return 0;
}
sophiebul(int x )
{

    int j,kontrol = 0;
    for(j=2; j<=(2*x+1)/2; j++)
    {
        if( (2*x+1) % j == 0)
        {
            kontrol = 1;
            break;
        }
    }
    if(kontrol == 0)
    printf("%d\n",x);
    return 0;
}














