#include <iostream>
using namespace std;

int main() {
    int dec, a[20], i,j;
    dec = 7, i = 0;
    cout <<"The decimal value : " <<dec <<endl;
    while(dec > 0){
        a[i] = dec % 2;
        i++;
        dec = dec / 2;
    }
    cout <<"Binary equivalent is : ";
    for(j = i-1;j >= 0;j--)
        cout <<a[j];
    return 0;
}
