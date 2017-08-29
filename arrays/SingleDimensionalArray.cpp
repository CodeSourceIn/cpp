#include <iostream>
using namespace std;

void printarray(int a[], int len) {
    for ( int i = 0; i < len; i++) {
        cout <<a[i] <<"  ";
    }
}
int main() {
    int temp, len = 10;
    int a[len] = {1,2,3,4,5,6,7,8,9,10};
    cout <<"The array elements are : " <<endl;
    printarray(a,len);
    cout <<endl;
    for(int i = 0; i < len/2; i++) {
        temp = a[i];
        a[i] = a[((len - 1)- i)];
        a[((len - 1)- i)] = temp;
    }
    cout <<"The reversed array elements : " <<endl;
    printarray(a,len);
    return 0;
}

