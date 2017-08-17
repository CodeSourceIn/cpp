#include <iostream>
using namespace std;

int main() {
    cout << "Simple for loop- Increment" <<endl;
    cout << "--------------------------" <<endl;
    for (int i = 1; i <= 10; i+=2){
        cout<< i <<",";
    }
    cout <<endl <<endl;
    cout << "Simple for loop- Decrement" <<endl;
    cout << "--------------------------" <<endl;
    for (int i = 10; i >= 1; i-=2){
        cout<< i <<",";
    }
    return 0;
}