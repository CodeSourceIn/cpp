#include <iostream>
using namespace std;

int main() {
    cout << "The value for 7! : " <<endl;
    cout <<"Increasing do-while loop" <<endl;
    cout <<"------------------------" <<endl;
    int i = 1, fact = 1;
    do {
        cout <<i <<" x ";
        fact *= i;
        i++;
    } while ( i <= 7);
    cout <<endl <<"Factorial of 7 " <<" = " <<fact;
    cout <<endl <<"Decreasing do-while loop" <<endl;
    cout <<"------------------------" <<endl;
    i = 7, fact = 1;
    do {
        cout <<i <<" x ";
        fact *= i;
        i--;
    } while ( i >= 1);
    cout <<endl <<"Factorial of 7 " <<" = " <<fact;
    return 0;
}