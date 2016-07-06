#include <iostream>
#include <string>
#include "../include/Sales_item.h"

int main()
{
    Sales_item transaction1, transaction2;
    std::cin >> transaction1 >> transaction2;
    if(transaction1.isbn() == transaction2.isbn())
    {
        std::cout << transaction1 + transaction2 << std::endl;
    } else
    {
        std::cout << "Transactions should contain the same isbn" << std::endl;
    }
    
    return 0;
}