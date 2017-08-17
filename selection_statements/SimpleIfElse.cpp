#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, max;
    if (a > b) {
        cout <<"If part is executed " <<endl;
        max = a;
    }
    else {
        cout <<"Else part is executed" <<endl;
        max = b;
    }
    cout <<"The maximum value is : "<<max <<endl;
    return 0;
}