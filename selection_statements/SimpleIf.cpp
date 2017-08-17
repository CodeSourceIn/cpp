#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
int a = 5, b = 0, c;
    if (b==0){
        cout<< "Divide by zero" <<endl;
        exit(0);
    }
    c = a / b ;
    cout<<"The result is : "<<c <<endl;
    return 0;
}