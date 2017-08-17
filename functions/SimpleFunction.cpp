#include <iostream>
using namespace std;

float cube(float a) {
    float n;
    n = a * a * a;
    return (n);
}
int main() {
     float x, y;
     x = 5;
     y = cube(x);
     cout <<"The cube of " <<x <<" is " <<y <<endl;
    return 0;
}