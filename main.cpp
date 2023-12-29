#include <iostream>
#include "stdlib.h"
#define n 100
int main()
{
    int i,x,a[n];
    for ( i = 0 ; i<=n-1 ; i++ )
    std::cin>>a[i];
    std::cout<<"enter x : ";
    std::cin>>x;
    for ( i = 0 ; i<=n-1 ; i++ )
        if (a[i]==x)
        {
            std::cout<<"found";
            exit(0);
        }
    std::cout<<"not found ";
}

