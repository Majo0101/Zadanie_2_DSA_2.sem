#include <string>

using namespace std;

#ifndef ZADANIE_2_STACK_H
#define ZADANIE_2_STACK_H

class Stack {

public:
    bool stackExist = false; //Stack exist bool

    string stackCreate();      //Fake function and set array to \0\0\0...
    string data(string input); //Input data from string
    string wipeStack();        //Clear arrays to \0
    string printFirstStack();  //Print first array
    string printSecondStack(); //Print second array
    string palindromeCheck();  //Check palindrome

private:
    char stack1[21]{};
    char stack2[21]{};
};

#endif //ZADANIE_2_STACK_H



