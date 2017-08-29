#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    printf("Overflow:\n");
    printf("Result for 2147483648 : ");
    printf("%d\n", 2147483648);
    printf("Underflow: \n");
    printf("Result for -2147483649 : ");
    printf("%d\n", -2147483649);
    return 0;
}
