#include <iostream>
using namespace std;

inline float mean(int x, int y) {
    cout<<"Function call replaced by Function body" <<endl;
    return float(x+y)/2;
}
int main() {
    int a = 57, b = 98;
    float m;
    cout<<"The values of a and b : "<<a <<" and "<<b <<endl;
    cout<<"---------------------------------------"<<endl;
    m = mean(a, b);
    cout<<"---------------------------------------"<<endl;
    cout<<"The mean of a and b : " <<m <<endl;
    return 0;
}
