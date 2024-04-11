#include <algorithm>
#include <iostream>

using namespace std;

bool checkElementsUniqueness(int* arr, int n) {
    // Write your code 
    sort(arr, arr + n);
    
    for(int i = 0; i < n - 1; ++i) { 
        if(arr[i] == arr[i + 1]) { 
            return false;
        }
    }
    
    return true;
}