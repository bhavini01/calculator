# include <iostream>
using namespace std;

int main()
{
    char op;
    double num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    switch(op)
    {
        case '+':
           
            cout << "Enter two operands: ";
            cin >> num1 >> num2;
            cout << num1+num2;
            break;

        case '-':
            cout << "Enter two operands: ";
            cin >> num1 >> num2;
            cout << num1-num2;
            break;

        case '*':
            cout << "Enter two operands: ";
            cin >> num1 >> num2;
            cout << num1*num2;
            break;

        case '/':
            cout << "Enter two operands: ";
            cin >> num1 >> num2;
            cout << num1/num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
