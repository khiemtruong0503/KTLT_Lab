#include <cstring>
#include <iostream>

using namespace std;

bool isPalindrome(const char* str) {
    // Write your code here
    int size = strlen(str);
    char *reversedStr = new char[size];
    int idx = 0;
    for(int i = size - 1; i >= 0; --i) { 
        reversedStr[idx++] = str[i];
    }
    
    reversedStr[idx] = '\000';
    
    if(strcmp(reversedStr, str) == 0) { 
        return true;
    }
    
    return false;
}
int main() { 
    cout << isPalindrome("abba");
}