#include <iostream>

void exercise09()
// Exercise 1_09 using for statement
{
    double sum{0.0};
    for(int i = 50; i <= 100; ++i){
        sum += i;
    }
    std::cout << "Result: " <<  sum << std::endl;
}

void exercise10()
// Exercise 1_10 using for statement
{
 for(int i = 10; i >= 0; --i){
    std::cout << i << std::endl;
 }
}

void print_range(int low, int high)
// Function used in exercise11
{
    for(int i = low; i <= high; ++i){
        std::cout << i << std::endl;
    }
}

void exercise11()
// Exercise 1_11 using for statement
{
    int num1{0}, num2{0};
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> num1 >> num2;
    if(num1 > num2){
        print_range(num2, num1);
    } else if(num2 > num1) {
        print_range(num1,num2);
    } else {
        std::cout << "This numbers are equals." << std::endl;
    }
}


int main(){
    std::cout << "Exercise 1_09: " << std::endl;
    exercise09();
    std::cout << "Exercise 1_10: " << std::endl;
    exercise10();
    std::cout << "Exercise 1_11: " << std::endl;
    exercise11();
    
    return 0;
}