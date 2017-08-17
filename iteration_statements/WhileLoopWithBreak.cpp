#include <iostream>
using namespace std;

int main() {
    cout <<"Without break statement in while loop" <<endl;
    cout <<"-------------------------------------" <<endl;
    int i = 1;
    while(i <= 10) {
        cout <<i <<",";
        i++;
    }
    cout <<endl <<endl;
    cout <<"With break statement in while loop" <<endl;
    cout <<"----------------------------------" <<endl;
    i = 1;
    while(i <= 10) {
        if(i == 5) {
            break;
        }
    cout <<i <<",";
        i++;
    }
    return 0;
}