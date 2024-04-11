#include <math.h>
#include <iostream>

using namespace std;

bool isPrime(int num) { 
    if(num < 2) return false;
    if(num == 2 || num == 3) return true;
    if(num % 2 == 0) return false;
    
    for(int i = 3; i <= sqrt(num); i += 2) {
        if(num % i == 0) return false;
    }
    
    return true;
}
bool isSpecialNumber(int n) {
    // Write your code 
    if(!isPrime(n)) return false;
    
    int Sum = 0;
    while(n > 0) {
        Sum += n % 10;
        n /= 10;
    }
    
    if(!isPrime(Sum)) {
        return false;
    }
    
    return true;
}