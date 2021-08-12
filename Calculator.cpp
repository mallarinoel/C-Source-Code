#include <iostream>

using namespace std;

int addition(int num, int num1) {

    int addition = num + num1;

    return addition;

}

int division(int num, int num1) {

    int div= 0;

    div = num/num1;

    return (div);
}

int multiplication(int num, int num1) {

    int mul = num * num1;

    return mul;

}

int subraction(int num, int num1) {

    int sub = num - num1;

    return sub;
}

int main() {

    int num, num1 = 0;

    char ch, yn;

    do {

        cout << "Enter Number : ";

        cin >> num;

        cout << "Enter Number : ";

        cin >> num1;

        cout << "//////////////////////" << endl;

        cout << "Menu : " << endl;

        cout << "[A]-ddition" << endl;

        cout << "[M]-ultiplication" << endl;

        cout << "[S]-ubtraction" << endl;

        cout << "[D]-ivision" << endl;

        cout << "//////////////////////" << endl;

        cout << "\nSagot : ";

        cin >> ch;

        switch (ch) {

        case 'A':

        case 'a': {

            cout << num << " ÷ " << num1 << " = ";

            addition(num, num1);

            cout << "\nGusto mo pa bang mag patuloy? Y/N" << endl;

            cout << "Sagot : ";

            cin >> yn;

            break;

        }

        case 'M':

        case 'm': {

            cout << num << " ÷ " << num1 << " = ";

            multiplication(num, num1);

            cout << "\nGusto mo pa bang mag patuloy? Y/N" << endl;

            cout << "Sagot : ";

            cin >> yn;

            break;

        }

        case 'S':

        case 's': {

            cout << num << " × " << num1 << " = ";

            subtraction(num, num1);

            cout << "\nGusto mo pa bang mag patuloy? Y/N" << endl;

            cout << "Sagot : ";

            cin >> yn;

            break;

        }

        case 'D':

        case 'd': {

            cout << num << " ÷ " << num1 << " = ";

            division(num, num1);

            cout << "\nGusto mo pa bang mag patuloy? Y/N" << endl;

            cout << "Sagot : ";

            cin >> yn;

            break;

        }

        default:

            cout << ch << " ay hindi matukoy, subukan muli." << endl;

            cout << "Gusto mo pa bang mag patuloy? Y/N" << endl;

            cout << "Sagot : ";

            cin >> yn;
        }

    } while( yn == 'Y' || yn == 'y');

    return 0;

}
