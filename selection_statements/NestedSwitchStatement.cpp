#include <iostream>
using namespace std;

int main() {
    int a = 8;
    cout <<"The Number is : " <<a <<endl;
    switch (a){
    case 0 : cout <<"The number is zero" <<endl;
            break;
    default: cout <<"The number is a non-zero integer" <<endl;
            int b = a % 2;
            switch (b){
                case 0: cout <<"The number is even" <<endl;
                        break;
                case 1: cout <<"The number is odd" <<endl;
                        break;
            }
    }
    return 0;
}