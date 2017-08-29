#include <iostream>
using namespace std;

void style1(){
    int x = 10, y = 5, sum;
    sum = x + y;
    cout <<" The sum is        : " <<sum <<endl;
}
void style2(int x, int y){
    int diff;
    diff = x - y;
    cout <<" The difference is : " <<diff <<endl;
}
int style3(){
    int x = 10, y = 5, mul;
    mul = x * y;
    return mul;
}
int style4( int x, int y){
    int div;
    div = x / y;
    return div;
}
int main() {
     int a=10, b=5;
     cout<<" The numbers are <<a <<" and " <<b <<endl;
     style1();
     style2(a, b);
     cout <<" The product is    : " <<style3() <<endl;
     cout <<" The quotient is   : " <<style4(a, b) <<endl;
     return 0;
}
