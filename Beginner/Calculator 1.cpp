#include <iostream>
using namespace std;

int main(){
    int num1, num2; //declaring the variables
    char op;

    cout << "Enter the Operation to be performed (+ - * / %) : ";
    cin >> op;

    cout << "\nEnter the Two Numbers: ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << "Addition of Two Numbers: \n";
        cout << num1 << op << num2 << "=" << num1 + num2;
        break;
    case '-':
        cout << "Subtraction of Two Numbers: \n";
        cout << num1 << op << num2 << "=" << num1 - num2;
        break;
    case '*':
        cout << "Product of Two Numbers:\n";
        cout << num1 << op << num2 << "=" << num1 * num2;
        break;
    case '/':
        if(num2==0){
            cout << "Division by 0 is Undefined!\n";
        }
        else{
            cout << "Division of Two Numbers: \n";
            cout << num1 << op << num2 << "=" << num1 / num2;
        }
        break;
    case '%':
        if(num2==0){
            cout << "Division by 0 is Undefined!\n";
        }
        else{
            cout << "Modulus of Two Numbers:\n";
            cout << num1 << "%" << num2 << "=" << num1 % num2;
        }
        break;
    default:
        cout << "Invalid operation Entered!\n";
        break;
    }

}