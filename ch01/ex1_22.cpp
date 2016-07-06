#include <iostream>
#include <string>
#include "../include/Sales_item.h"

int main()
{
    Sales_item sum, current;
    std::cin >> sum; // initialize sum to the first transaction read
    while(std::cin >> current)
    {
        if (sum.isbn() == current.isbn()){
            sum += current;
        } else {
            std::cout << sum << std::endl;
            sum = current;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}