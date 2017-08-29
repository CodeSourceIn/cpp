#include <iostream>
using namespace std;

int main() {
    int dec, a[20], i,j;
    dec = 74, i = 0;
    cout <<"The decimal value : " <<dec <<endl;
    while(dec > 0){
        a[i] = dec % 16;
        i++;
        dec = dec / 16;
    }
    cout <<"Hexadecimal equivalent is : ";
    for(j = i-1;j >= 0;j--){
        switch(a[j]){
            case 10: cout<<"A";
                     break;
            case 11: cout<<"B";
                     break;
            case 12: cout<<"C";
                     break;
            case 13: cout<<"D";
                     break;
            case 14: cout<<"E";
                     break;
            case 15: cout<<"F";
                     break;
            default :cout<<a[j];
        }
    }
    return 0;
}