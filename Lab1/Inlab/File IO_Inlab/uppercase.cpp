#include <iostream>

using namespace std;

void uppercase(string output)   {
    // TODO
    FILE *FileOut = fopen(output.c_str(), "w");
    string S;
    
    cin >> S;
    
    int size = S.size();
    
    for(int i = 0; i < size; ++i) {
        if(S[i] >= 'a' && S[i] <= 'z') { 
            S[i] -= 32;
        }
    }
    
    fputs(S.c_str(), FileOut);

    fclose(FileOut);
}

int main() { 
    uppercase("fileout");
}