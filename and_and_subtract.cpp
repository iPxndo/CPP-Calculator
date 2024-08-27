#include <iostream>

using namespace std;

int main() {
    
    // Defining Variables
    int num1, num2, answer;
    
    // User Inputs
    cout << "Enter First Number: ";
    cin >> num1;
    
    cout << "Enter Second Number: ";
    cin >> num2;    

    // Choosing Operation
    string op;
    cout << "Addition or Subtraction: ";
    cin >> op;
    
    // Addition
    if (op == "Addition") {
        
        answer = num1 + num2;
        cout << "\n";
        printf("%d + %d = %d", num1, num2, answer);
        
    }

    // Subtraction
    if (op == "Subtraction") {
        
        answer = num1 - num2;
        cout << "\n";
        printf("%d - %d = %d", num1, num2, answer);
        
    }
    
    return 0;
}
