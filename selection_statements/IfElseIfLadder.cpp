#include <iostream>
using namespace std;

int main() {
    int a = -541;
    if(a > 0)
        cout<< "Given Number is Positive" <<endl;
    else if(a == 0)
        cout <<"Given Number is Zero" <<endl;
    else if(a < 0)
        cout <<"Given Number is Negative" <<endl;
    else
        cout <<"Not a valid number" <<endl;
    return 0;
}