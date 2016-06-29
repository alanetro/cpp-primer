#include <iostream>
int main(){
    double value = 50.0, sum = 0.0;
    while(value <= 100){
        sum += value;
        ++value;
    }
    std::cout << sum << std::endl;
    return 0;
}