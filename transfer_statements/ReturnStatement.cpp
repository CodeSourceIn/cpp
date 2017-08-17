#include <iostream>
using namespace std;

int findpos(char w[], char c) {
    int flag = -1;
    for (int i = 0 ; w[i] != '\0' ; i++) {
        if (w[i] == c) {
            flag = 0;
            cout <<"The character is at the position : " <<i+1 <<endl;
        }
    }
    return (flag);
}
int main() {
    int a;
    char word[] = "codesource";
    char ch = 'e';
    cout <<"The word to be searched in       : " <<word <<endl;
    cout <<"The character to be searched     : " <<ch <<endl;
    cout <<"-------------------------------------" <<endl;
    a = findpos(word,ch);
    if(a == -1) {
        cout <<"Character not in the word";
    }
    return 0;
}