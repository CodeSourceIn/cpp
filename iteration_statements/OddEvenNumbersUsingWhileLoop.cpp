#include <iostream>
using namespace std;

int main() {
    cout <<"While loop-Incremented by 2" <<endl;
    cout <<"---------------------------" <<endl;
    int i = 2, sum=0 ;
    while (i <= 10) {
        cout<< i <<" , ";
        sum+=i;
        i+=2;
    }
    cout <<endl <<"Sum of even numbers :  " <<sum <<endl;
    cout <<endl;
    cout <<"While loop-Decremented by 2" <<endl;
    cout <<"---------------------------" <<endl;
    i=9, sum=0;
    while (i >= 1) {
        cout<< i <<" , ";
        sum+=i;
        i-=2;
    }
    cout <<endl <<"Sum of odd numbers :  " <<sum <<endl;
    return 0;
}