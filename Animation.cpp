#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;
string username = "xdeveloper";
string password = "admin12345";
string uname, pwd;

void checkAcc();

void clearScreen() {
    cout << "\033[H\033[2J";
}
void left() {
    clearScreen();
    cout << "#========|| °Information° ||========" << endl;
    cout << "Title : Simple Dimple Pop It Squish" << endl;
    cout << "Developed by : Nam Mallari" << endl;
    cout << "====================================" << endl;
    cout << endl;
    cout << "\t  \\\\\\|///" << endl;
    cout << "\t   ×××××"  << endl;
    cout << "\t  ×××××××" << endl;
    cout << "\t  ×◕×|×◕×" << endl;
    cout << "\t  ×××-×××" << endl;
    cout << "\t    ×××  " << endl;
    cout << "\t   ××××× " << endl;
    cout << "\t  ×××××××=xxxx[]:::::::>"<< endl;
    cout << "\t ||×××××X" << endl;
    cout << "\t ||×××××X" << endl;
    cout << "\t ||×××××X" << endl;
    cout << "\t \\\\×××××//" << endl;
    cout << "\t ////////" << endl;
    cout << "\t ××××××××" << endl;
    cout << "\t \\\\\\\\\\\\\\\\" << endl;
    cout << "\t |×××××××|" << endl;
    cout << "\t //××X××\\\\" << endl;
    cout << "\t =========" << endl;
    cout << "÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷" << endl;
    cout << "||||||||||||||||||||||||||||||||||||" << endl;
    cout << "||||||||||||||||||||||||||||||||||||" << endl;
    cout << "||||||||||||||||||||||||||||||||||||" << endl;
    cout << "||||||||||||||||||||||||||||||||||||" << endl;
    cout << "||||||||||||||||||||||||||||||||||||" << endl;
    cout << "####################################" << endl;
}

void right() {
    clearScreen();
    cout << "#========|| °Information° ||========" << endl;
    cout << "Title : Simple Dimple Pop It Squish" << endl;
    cout << "Developed by : Nam Mallari" << endl;
    cout << "====================================" << endl;
    cout << endl;
    cout << "\t\t\t \\\\\\|///" << endl;
    cout << "\t\t\t   ×××××  " << endl;
    cout << "\t\t\t  ××××××× " << endl;
    cout << "\t\t\t  ×︵×|×◕× "<< endl;
    cout << "\t\t\t  ×××‿××× " << endl;
    cout << "\t\t\t    ×××   " << endl;
    cout << "\t\t\t   ×××××  " << endl;
    cout << "\t   <:::::::[]xxxx=×××××××" << endl;
    cout << "\t\t\t  X×××××||" << endl;
    cout << "\t\t\t  X×××××||" << endl;
    cout << "\t\t\t  X×××××||" << endl;
    cout << "\t\t\t \\\\×××××//" << endl;
    cout << "\t\t\t \ \\\\\\\\\\\\\\\\" << endl;
    cout << "\t\t\t  ××××××××" << endl;
    cout << "\t\t\t  ////////" << endl;
    cout << "\t\t\t |×××××××|" << endl;
    cout << "\t\t\t //××X××\\\\" << endl;
    cout << "\t\t\t =========" << endl;
    cout << "÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷" << endl;
    cout << "||||||||||||||||||||||||||||||||||||" << endl;
    cout << "||||||||||||||||||||||||||||||||||||" << endl;
    cout << "||||||||||||||||||||||||||||||||||||" << endl;
    cout << "||||||||||||||||||||||||||||||||||||" << endl;
    cout << "||||||||||||||||||||||||||||||||||||" << endl;
    cout << "####################################" << endl;
}
void login() {
    string username = "";
    string password = "";

    cout << "\t───▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄───" << endl;
    cout << "\t───█▒▒░░░░░░░░░▒▒█───" << endl;
    cout << "\t────█░░█░░░░░█░░█────" << endl;
    cout << "\t─▄▄──█░░░▀█▀░░░█──▄▄─" << endl;
    cout << "\t█░░█─▀▄░░░░░░░▄▀─█░░█" << endl;
    cout << "\t█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█" << endl;
    cout << "\t█░░╦─╦╔╗╦─╔╗╔╗╔╦╗╔╗░░█" << endl;
    cout << "\t█░░║║║╠─║─║─║║║║║╠─░░█" << endl;
    cout << "\t█░░╚╩╝╚╝╚╝╚╝╚╝╩─╩╚╝░░█" << endl;
    cout << "\t█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█" << endl;
    cout << endl;
    cout << "Username : ";
    cin >> uname;
    cout << "Password : ";
    cin >> pwd;
    checkAcc();
}

void checkAcc() {
    if(uname == username && pwd == password) {
        for(int i = 1; i <=10; i++) {
            left();
            sleep(1);
            right();
            sleep(1);
        }
    } else {
        cout << "Account not found." << endl;
        clearScreen();
        login();
    }

}
int main() {
    login();
    return 0;
}
    
