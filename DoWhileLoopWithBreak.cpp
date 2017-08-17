#include <iostream>
using namespace std;

int main() {
    cout <<"Without break statement in do-while loop" <<endl;
    cout <<"------------------------------------------" <<endl;
    int i = 1;
    do {
        cout <<i <<",";
        i++;
    } while(i <=10);
    cout <<endl <<endl;
    cout <<"With break statement in do-while loop" <<endl;
    cout <<"---------------------------------------" <<endl;
    i = 1;
   do {
        if(i == 5) {
            break;
        }  
    cout <<i <<",";
        i++;
    } while(i <= 10);
    return 0;
}