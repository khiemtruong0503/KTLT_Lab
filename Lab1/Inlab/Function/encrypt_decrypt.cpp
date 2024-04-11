#include <cstring>
#include <iostream>

using namespace std;

#include <cstring>
void encrypt(char* text, int shift) {
    // Write your code
    int size = strlen(text);
    
    for(int i = 0; i < size; ++i) { 
        if(text[i] >= 'a' && text[i] <= 'z') {
            if(text[i] + shift > 'z') { 
                text[i] = 'a' + (text[i] + shift) - 'z' - 1;
            }
            else if(text[i] + shift < 'a') { 
                text[i] = 'z' - ('a' - (text[i] + shift)) + 1;
            }
            else text[i] += shift;
        }
        else if(text[i] >= 'A' && text[i] <= 'Z') { 
            if(text[i] + shift > 'Z') { 
                text[i] = 'A' + (text[i] + shift) - 'Z' - 1;
            }
            else if(text[i] + shift < 'A') {
                text[i] = 'Z' - ('A' - (text[i] + shift)) + 1;
                
            }
            else text[i] += shift;
        }
    }
}

void decrypt(char* text, int shift) {
    // Write your code 
    int size = strlen(text);
    
    for(int i = 0; i < size; ++i) { 
        if(text[i] >= 'a' && text[i] <= 'z') { 
            if(text[i] - shift < 'a') { 
                text[i] = 'z' - ('a' - (text[i] - shift)) + 1;
            }
            else if(text[i] - shift > 'z') {
                text[i] = 'a' + (text[i] - shift) - 'z' - 1;
            }
            else text[i] -= shift;
        }
        else if(text[i] >= 'A' && text[i] <= 'Z') { 
            if(text[i] - shift < 'A') { 
                text[i] = 'Z' - ('A' - (text[i] - shift)) + 1;
            }
            else if(text[i] - shift > 'Z') {
                text[i] = 'A' + (text[i] - shift) - 'Z' - 1;
                
            }
            else text[i] -= shift;
        }
    }
}

int main() { 
    int n, shift; 
    cin >> n >> shift;
    char* text = new char[n+1];
    for(int i = 0; i < n; i++) cin >> text[i];
    text[n] = 0;

    encrypt(text, shift);
    cout << text << '\n';
    decrypt(text, shift);
    cout << text;

    delete[] text;
}