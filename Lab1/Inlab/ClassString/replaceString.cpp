#include <iostream>
#include <string>

using namespace std;

void replaceString(string s, string s1, string s2){
    //TO DO
    size_t found = s.find(s1);
    size_t tmp = found;
    
    while(found != string::npos) {
        found = s.find(s1, found + 1);
        
        if(found != string::npos) { 
            tmp = found;
        }
    }
    
    if(tmp != string::npos) { 
        s.replace(tmp, s1.size(), s2);
    }
    
    cout << s;
}