#include <iostream>

void print_range(int low, int high){
    while(low <= high) {
        std::cout << low << std::endl;
        ++low;
    }
}

int main(){
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
    return 0;
}