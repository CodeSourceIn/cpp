#include <iostream>
using namespace std;

int main() {
    cout << "Without break statement in for loop" <<endl;
    cout <<"------------------------------------" <<endl;
    for(int i = 1; i <= 10; i++) {
        cout<< i <<",";
    }
    cout <<endl <<endl;
    cout <<"With break statement in for loop" <<endl;
	cout <<"--------------------------------" <<endl;
    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            break;
        }
        cout <<i <<",";
    }
    return 0;
}