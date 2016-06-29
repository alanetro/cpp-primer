#include <iostream>

int main(){
    int currVal = 0, val = 0;
    if(std::cin >> currVal){
        int cnt = 1;
        while(std::cin >> val){
            if(currVal == val){
                ++cnt;
                
            } else {
                std::cout << currVal << " occurs " << cnt << " times." << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times." << std::endl;
    }
    
    return 0;
}

/**
 * Tested 1  1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
 * Result: Infinite Loop
 * 
 * Tested 1 2 3 4 5 6 7 8 9
 * Result: 1 occurs 1 times.
 *         2 occurs 1 times.
 *              .
 *              .
 *              .
 *         9 occurs 1 times
 * */