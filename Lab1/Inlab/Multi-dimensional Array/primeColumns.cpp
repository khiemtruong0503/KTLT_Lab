#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

#include <math.h>

bool isPrime(int num) { 
    if(num < 2) return false;
    
    if(num == 2 || num == 3) return true;
    
    if(num % 2 == 0) return false;
    for(int i = 3; i <= sqrt(num); i += 2) { 
        if(num % i == 0) return false;
    } 
    
    return true;
}
int primeColumns(int arr[][1000], int row, int col) {
    int countHN2 = 0;
    
    for(int c = 0; c < col; ++c) {
        int sumCol = 0;
        for(int r = 0; r < row; ++r) { 
            sumCol += arr[r][c];
        }
        
        if(isPrime(sumCol)) {
            countHN2++;
        }
    }
    
    return countHN2;
}