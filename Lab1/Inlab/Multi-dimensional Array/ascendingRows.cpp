#include <iostream>

using namespace std;

int ascendingRows(int arr[][1000], int row, int col) {
    int countHN1 = 0;
    
    for(int r = 0; r < row; ++r) { 
        bool isHN1 = true;
        int Min = arr[r][0];
        for(int c = 1; c < col; ++c) { 
            if(arr[r][c] < Min) { 
                isHN1 = false;
                break;
            }
            Min = arr[r][c];
        }
        
        if(isHN1) { 
           ++countHN1; 
        }
    }
    
    return countHN1;
}