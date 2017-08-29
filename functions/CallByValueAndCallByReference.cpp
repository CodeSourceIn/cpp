#include <iostream>
using namespace std;

void swapCallByValue(int x, int y) {
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<" Call by value - swap " <<endl;
    cout<<" --------------------" <<endl;
    cout<<" During : a = " <<x <<" and b = " <<y <<endl;
}
void swapCallByReference(int &x, int &y) {
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<" Call by reference using reference - swap " <<endl;
    cout<<" -----------------------------------------" <<endl;
    cout<<" During : a = "<<x <<" and b = " <<y <<endl;
}
void swapCallByReferencePointer(int* x, int* y) {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<" Call by reference using pointer - swap " <<endl;
    cout<<" ---------------------------------------" <<endl;
    cout<<" During : a = "<<*x <<" and b = " <<*y <<endl;
}
int main() {
    int a, b;
    a = 7, b = 2;
    cout<<" The values are : a = " <<a <<" and b = " <<b <<endl;
    cout<<"-----------------------------------------"<<endl;
    swapCallByValue(a, b);
    cout<<" After  : a = "<<a <<" and b = " <<b <<endl;
    cout<<"------------------------------------------" <<endl;
    swapCallByReference(a, b);
    cout<<" After  : a = " <<a <<" and b = " <<b <<endl;
    cout<<"------------------------------------------" <<endl;
    a = 7, b = 2;
    swapCallByReferencePointer(&a, &b);
    cout<<" After  : a = " <<a <<" and b = " <<b <<endl;
    cout<<"------------------------------------------" <<endl;
    return 0;
}
