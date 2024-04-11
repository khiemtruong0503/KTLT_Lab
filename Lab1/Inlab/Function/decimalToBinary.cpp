#include <iostream>
#include <math.h>

using namespace std;

#include <math.h>
void recursive_DecToBin(int decimal_number, long int &binary_number, int exp = 0) { 
    // base case
    if(decimal_number == 0) {
        if(decimal_number % 2 != 0) {
            binary_number = binary_number + (decimal_number %2) * pow(10, exp);
        }
        decimal_number = decimal_number / 2;
        return;
    }
    
    if(decimal_number % 2 != 0) {
        binary_number = binary_number + (decimal_number %2) * pow(10, exp);
    }
    decimal_number = decimal_number / 2;
    
    recursive_DecToBin(decimal_number, binary_number, exp + 1);
}
long int decimalToBinary(int decimal_number)
{
	long int binary_number = 0;
	recursive_DecToBin(decimal_number, binary_number);
	
	return binary_number;
}

int main() { 
    cout << decimalToBinary(20);
}