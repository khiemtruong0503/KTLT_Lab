#include <iostream>
#include <cstring>

using namespace std;

// Student may implement another function as need

void printFirstRepeatedWord(char str[]) {
    // TODO
    int size = strlen(str);

    // trim blank spaces in front and back 
    for(int i = 0; i < size; ++i) { 
        if(str[i] == ' ') { 
            for(int j = i + 1; j < size; ++j) { 
                str[j] = str[j + 1];
            }
        } 
        else break;
    }
    
    for(int i = size - 1; i >= 0; --i) {
        if(str[i] == ' ') { 
            str[i] = '\000';
        } 
        else break;
    }
    
    // count space to get number of words
    int numOfWords = 0;
    for(int i = 0; i < size; ++i) { 
        if(str[i] == ' ') { 
            ++numOfWords;
        }
    }
    ++numOfWords;
    // get word using strtok

    char **Words = new char*[numOfWords];
    int wordsIndex = 0;
    char *ptr = strtok(str, " ");
    bool hasRepetition = false;
    
    while(ptr) { 
        Words[wordsIndex] = new char[strlen(ptr)];
        strcpy(Words[wordsIndex], ptr);
        wordsIndex++;
        
        for(int i = 0; i < wordsIndex - 1; ++i) { 
            if(strcmp(Words[i], ptr) == 0) { 
                cout << ptr;
                return;
            }
        }
        
        ptr = strtok(NULL, " ");
    } 
    
    if(!hasRepetition) { 
        cout << "No Repetition";
    }
}    
