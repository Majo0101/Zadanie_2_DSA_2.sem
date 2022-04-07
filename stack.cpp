#include <string>
#include <cstring>
#include "stack.h"

using namespace std;

string Stack ::stackCreate() {

    string a = "Stack is already exist";
    string b = "Stack was cretaed";

    if (stackExist){
        return a;
    }else{
        for (char & i : stack1) {
            i = '\0';
        }

        for (char & i : stack2) {
            i = '\0';
        }
        stackExist = true;
        return b;
    }
}

string Stack ::printFirstStack() {

    string a;

    if (!stackExist){
        return a = "You must create stack first";
    }else{
        return stack1;
    }

}

string Stack ::printSecondStack() {

    string a;

    if (!stackExist){
        return a = "You must create stack first";
    }else{
        return stack2;
    }
}

string Stack::data(string input) {

    string a,b,c,d;

    if(!stackExist){
        return a = "You must create stack first";
    }else{

        unsigned long long len = input.size();
        char *buffer;
        int j = 0;

        if(len > 21){
            return b = "Wrong input, enter 21 chars long string";
        }else{

            buffer = (char*) malloc(len);
            strcpy(buffer, input.c_str());

            int size = (int)strlen(stack1);

            if ((size+len)>21){
                return c = "Stack overflow !!";
            }else{

                for (int i = size; i < (len+size); i++,j++) {
                    stack1[i] = buffer[j];
                }

                strcpy(stack2,stack1);
                strrev(stack2);

                free(buffer);
                j  = 0;
                return d = "-> push ->";
            }
        }
    }
}

string Stack ::palindromeCheck() {

    string a,b,c,d;

    if (!stackExist){
        return a = "You must create stack first";
    }else{

        char *buffer1;
        char *buffer2;

        int len1 = (int)strlen(stack1);
        int len2 = (int)strlen(stack2);

        if (len1 == 0 && len2 == 0){
            return b = "Stack is empty";
        }else{
            buffer1 = (char*) malloc(len1);
            buffer2 = (char*) malloc(len2);

            for (int i = 0, j =0; i <= len1; i++, j++) {
                if (stack1[i] >= 'a' && stack1[i] <= 'z' || stack1[i] >= 'A' && stack1[i] <= 'Z'){
                    buffer1[j] = stack1[i];
                }else{
                    i++;
                    buffer1[j] = stack1[i];
                }
            }

            for (int i = 0, j =0; i <= len2; i++, j++) {
                if (stack2[i] >= 'a' && stack2[i] <= 'z' || stack2[i] >= 'A' && stack2[i] <= 'Z'){
                    buffer2[j] = stack2[i];
                }else{
                    i++;
                    buffer2[j] = stack2[i];
                }
            }

            int check = strcmpi(buffer1, buffer2);

            free(buffer1);
            free(buffer2);

            if (check == 0){
                return c = "Palindrome";
            }else {
                return d = "No palindrome ";
            }
        }
    }
}

string Stack ::wipeStack() {

    string a,b;

    if (!stackExist){
        return a = "You must create stack first";
    }else{
        for (char & i : stack1) {
            i = '\0';
        }

        for (char & i : stack2) {
            i = '\0';
        }
        return b = "Stacks was wiped";
    }
}