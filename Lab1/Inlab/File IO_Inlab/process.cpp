#include <iostream>
#include <fstream>

using namespace std;

void process(string fileName)   {
    // TODO
    ifstream FileIn(fileName, ios::in);
    
    if(!FileIn) {return;}
    
    int N, M;
    
    FileIn >> N >> M;
    
    if(N == 0) {cout << 0;}
    // create an array to store each line's maximum value
    float *arr = new float[N];
    int arrIdx = 0;
    for(int i = 0; i < N; ++i) { 
        float Max;
        
        FileIn >> Max;
        for(int j = 1; j < M; ++j) { 
            float num;
            
            FileIn >> num;
            
            if(num > Max) { 
                Max = num;
            }
        }
        
        arr[arrIdx++] = Max;
    }
    
    // print out all max values
    for(int i = 0; i < arrIdx; ++i) { 
        cout << arr[i] << " ";
    }
    
    // find max of arr
    float Max = arr[0];
    
    for(int i = 1; i < N; ++i) { 
        if(arr[i] > Max) { 
            Max = arr[i];
        }
    }
    
    cout << Max;
    
    FileIn.close();
}

int main() {  
    process("input.txt");
}