#include <iostream>
using namespace std;

int main() {
    cout <<"The square values :  " <<endl;
    cout <<endl;
    cout <<"Increasing while loop" <<endl;
    cout <<"---------------------" <<endl;
    int i = 1 ;
    while (i <= 10) {
        cout<< i <<"^2 = "  <<i*i <<endl;
        i++;
    }
    cout <<endl;
    cout <<"Decreasing while loop" <<endl;
    cout <<"---------------------" <<endl;
    i = 10;
    while (i >= 1) {
        cout<< i <<"^2 = "  <<i*i <<endl;
        i--;
    }
    return 0;
}