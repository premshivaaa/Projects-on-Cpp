#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    char op;

    int flag = 1;

    while(flag==1){

        cout << "Enter the Operation to be performed: ";
        cin >> op;

        cout << "Enter two Numbers: ";
        cin >> num1 >> num2;

        if(op == '+'){
            cout << "Addition of Two Numbers: \n";
            cout << num1 << op << num2 << "=" << num1 + num2;
        }
        else if(op == '-'){
            cout << "Subtraction of Two Numbers: \n";
            cout << num1 << op << num2 << "=" << num1 - num2;
        }
        else if(op == '*'){
            cout << "Product of Two Numbers:\n";
            cout << num1 << op << num2 << "=" << num1 * num2;
        }
        else if(op == '/'){
            if(num2==0){
                cout << "Division by 0 is Undefined!\n";
            }
            else{
                cout << "Division of Two Numbers: \n";
                cout << num1 << op << num2 << "=" << num1 / num2;
            }
        }
        else if(op == '%'){
            if(num2==0){
                cout << "Division by 0 is Undefined!\n";
            }
            else{
                cout << "Modulus of Two Numbers:\n";
                cout << num1 << "%" << num2 << "=" << num1 % num2;
            }
        }
        else{
            cout << "Invalid operation Entered!\n";
        }

        cout << "Enter 1 to continue and 0 to stop!";
        cin >> flag;
    }

    return 0;
}