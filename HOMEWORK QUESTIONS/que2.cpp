#include<iostream>
using namespace std;

int main()
{
    // CALCULATOR PROGRAM

    double num1 , num2 ;
    char op ;

    cout << "Enter first number : " ;
    cin >> num1 ;

    cout << "Enter second number : " ;
    cin >> num2 ;

    cout << "Enter operator ( + , - , * , / , % ) : " ;
    cin >> op ;

    cout << "Result : " ;
    switch (op)
    {
        case '+' :
            cout << (num1 + num2) ;
            break ; // The break statement is used to exit the switch statement after executing the code for the matched case. Without the break statement, the program would continue to execute the code for the subsequent cases, which is not desired in this context.

        case '-' :
            cout << (num1 - num2) ;
            break ;

        case '*' :
            cout << (num1 * num2) ;
            break ;

        case '/' :
            if (num2 != 0)
                cout << (num1 / num2) ;
            else
                cout << "Error: Division by zero is not allowed." ;
            break ;
        
        case '%' :
        if  (num2 != 0)
            cout << static_cast<int>(num1) % static_cast<int>(num2) ;
        else
            cout << "Error: Division by zero is not allowed." ;
            break ;

        default :
            cout << "Error: Invalid operator." ;
    }
    
    return 0 ;
}    


