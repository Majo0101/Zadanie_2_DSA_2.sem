#include <iostream>
#include <fstream>
#include "stack.h"

using namespace std;

int main() {

    Stack mag; // Object constructor

    char choice;
    string input;
    string print;

    ofstream File("Vystup.txt");

    if (!File.is_open()) exit(404);

    for (int i = 0; i < 3; i++) {

        cout << endl;                                                   File << endl;
        cout << "Enter your choice" << endl;                            File << "Enter your choice" << endl;
        cout << "a - Create stack" << endl;                             File << "a - Create stack" << endl;
        cout << "b - Wipe stack" << endl;                               File << "b - Wipe stack" << endl;
        cout << "c - Enter your string" << endl;                        File << "c - Enter your string" << endl;
        cout << "d - Show the first stack" << endl;                     File << "d - Show the first stack" << endl;
        cout << "e - Show the second stack" << endl;                    File << "e - Show the second stack" << endl;
        cout << "f - Palindrome test" << endl;                          File << "f - Palindrome test" << endl;
        cout << "x - Exit" << endl;                                     File << "x - Exit" << endl;

        cin >> choice;                                                  File << endl << choice << endl;

        switch (choice) {

            case 'a' :
                print = mag.stackCreate();
                cout << endl << print << endl;                          File << endl << print << endl;
                i--;
                print.clear();
                break;

            case 'b' :
                print = mag.wipeStack();
                cout << endl << print << endl;                           File << endl << print << endl;
                print.clear();
                i--;
                break;

            case 'c' :
                cout << endl << "Enter your string..." << endl;          File << endl << "Enter your string..." << endl;
                getline (cin, input);
                getline (cin, input);                              File << endl << input << endl;
                print = mag.data(input);
                cout << endl << print << endl;                           File << endl << print << endl;
                print.clear();
                i--;
                break;

            case 'd' :
                print = mag.printFirstStack();
                cout << endl << print << endl;                          File << endl << print << endl;
                print.clear();
                i--;
                break;

            case 'e' :
                print = mag.printSecondStack();
                cout << endl << print << endl;                          File << endl << print << endl;
                i--;
                break;

            case 'f' :
                print = mag.palindromeCheck();
                cout << endl << print << endl;                          File << endl << print << endl;
                print.clear();
                i--;
                break;

            case 'x':
                i = 5;
                break;

            default:
                cout << "Bad input " << endl;                           File << "Bad input " << endl;
        }

        input.clear();
    }
    File.close();
    return 0;
}

