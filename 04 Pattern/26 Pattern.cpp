//Right angle triangle number pattern
#include <iostream>

int main()
{
    int n;
    std::cout << "Enter Row" << std::endl;
    std::cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            
            std::cout << i ;
        }
        
        std::cout << std::endl;
    }

    return 0;
}
