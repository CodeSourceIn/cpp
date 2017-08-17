#include <iostream>
using namespace std;

int fact(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main() {
    int i = 5, f;
    cout <<"Factorial of "<<i <<" is :" <<endl;
    f = fact(i);
    cout <<f <<endl;
    return 0;
}