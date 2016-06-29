#include <iostream>

int main(){
    double sum{0.0};
    for(int i = 50; i <= 100; ++i){
        sum += i;
    }
    std::cout << "Result: " <<  sum << std::endl;
    return 0;
}