#include <iostream>
#include <cstring>

using namespace std;

// Student may implement another function as need

int find(char str[], char substr[]) {
    // TODO
    
    int size1 = strlen(str);
    int size2 = strlen(substr);
    
    if(size1 == 0 || size2 == 0) return -1;
    if(size1 < size2) return -1;
    
    char *ptr = strstr(str, substr);
    
    return ptr != NULL ? (ptr - str) : -1;
    
    // for(int i = 0; i <= size1 - size2; ++i) { 
    //     if(str[i] == substr[0]) {
    //         int idx = -2;
    //         int k = 1;
    //         for(int j = i + 1; j < i + size2; ++j, ++k) {
    //             if(str[j] != substr[k]) { 
    //                 idx = -1;
    //                 break;
    //             }
    //         }
            
    //         if(idx != -1) {
    //             return i;
    //         }
    //     }
    // }
    
    return -1;
}
