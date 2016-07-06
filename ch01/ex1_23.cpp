#include <iostream>
#include <string>
#include "../include/Sales_item.h"

int main()
{
    Sales_item current, previous;
    std::cin >> current; // initialize sum to the first transaction read
    int count = 1; // one transaction already readed
    while(std::cin >> current)
    {
        if ( current.isbn() == previous.isbn() ){
            ++count;
        } else {
            std::cout << previous.isbn() << ' ' << count << std::endl;
            count = 1;
        }
    }
    std::cout << previous.isbn() << ' ' << count << std::endl;
    return 0;
}