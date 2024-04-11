#include <iostream>
#include <cstring>

using namespace std;


// Student may implement another function as need

void process(char str[], char outstr[]) {
    // TODO
    int size = strlen(str);
    
    // trim blank space in back 
    while(str[strlen(str) - 1] == ' ') {
        str[strlen(str) - 1] = '\000';
    }
    // trim blank spaces in front 
    int idx = 0; // this index finds the first occurence of a non-space char
    int k = 0;
    char *tmp;
    while(str[idx] == ' ') { 
        ++idx;
    } 
    
    tmp = new char[strlen(str) - idx];
    
    for(int i = idx; i < strlen(str); ++i, ++k) {
        tmp[k] = str[i];
    }

    tmp[k] = '\000';
    
    strcpy(str, tmp);
    // trim space in middle
    for(int i = 1; str[i] != '\000'; ++i) { 
        if(str[i] == ' ') { 
            while(str[i + 1] == ' ') { 
                for(int j = i + 1; j < strlen(str) - 1; ++j) { 
                    str[j] = str[j + 1];
                }
                str[strlen(str) - 1] = '\000';
            } 
        }
    }
    
    
    // return output
    strcpy(outstr, str);
}
