#include <iostream>
using namespace std;

int sum(int x, int y) {
    int s;
    s = x + y;
    return s;
}
int sum(int x, int y, int z) {
    int s;
    s = x + y + z;
    return s;
}
float sum(float x, float y) {
    float s;
    s = x + y;
    return s;
}
float sum(float x, float y, float z) {
    float s;
    s = x + y +z;
    return s;
}
int main() {
    int a = 5, b = 10, c = 20, s1;
    float p = 5.2, q = 10.4, r = 22.2, s2;
    s1 = sum(a, b);
    cout <<"The sum of two integers is : " <<s1 <<endl;
    s1 = sum(a, b, c);
    cout <<"The sum of three integers is : " <<s1 <<endl;
    s2 = sum(p, q);
    cout<<"The sum of two floating points is : "<<s2 <<endl;
    s2 = sum(p, q, r);
    cout<<"The sum of three floating points is : "<<s2 <<endl;
    return 0;
}
