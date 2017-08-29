#include <iostream>
using namespace std;

float calcArea(float radius, float pi=3.14) {
    float area;
    area = pi *(radius * radius);
    return area;
}
int main() {
     float r, a, p;
     r = 5.0, p = 3.1;
     cout<<" The radius of the circle : "<<r <<endl <<endl;
     cout<<" The area of the circle : "<<endl;
     cout<<" ------------------------- "<<endl;
     a = calcArea(r, p);
     cout <<" Without using default value  : " <<a <<endl;
     a = calcArea(r);
     cout <<" Using default value   : " <<a <<endl;
     return 0;
}
