#include <iostream>
#include <string>

using namespace std;

void deleteWord(string s, string s1){
    //TO DO
    size_t found = s.find(s1);
    
    while(found != string::npos) { 
        s.erase(found, s1.size());
        
        found = s.find(s1);
    }
    
    cout << s;
}