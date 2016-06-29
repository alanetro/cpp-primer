#include <iostream>
/**
 * This program sums the numbers between -100 and 100 and produces the output 0.
 *   i = 100
 * SUM          i;
 *   i = -100
 * 
 * 
 *                             | (y)axis                                    
 *                             |
 * [-100] <--------------------|--------------------> [+100] (x)axis
 * 
 * 
 **/
int main(){
    int sum = {0};
    for(int i = -100; i <= 10; ++i){
        sum += i;
    }    
    std::cout << sum << std::endl;
    return 0;
}