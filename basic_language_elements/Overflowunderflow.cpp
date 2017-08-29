#include<stdio.h>
#include <limits.h>
using namespace std;

int main() {
    printf("Maximum int value= %d \n", INT_MAX);
    printf("Overflow:\n");
    printf("Result for 2147483647 + 0 : ");
    printf("%d\n", 2147483647 + 0);
    printf("Result for 2147483647 + 1 : ");
    printf("%d\n", 2147483647 + 1);
    printf("Result for 2147483647 + 2 : ");
    printf("%d\n", 2147483647 + 2);
    printf("Minimum int value= %d \n", INT_MIN);
    printf("Underflow: \n");
    printf("Result for -2147483648 - 0 : ");
    printf("%d\n", -2147483648 - 0 );
    printf("Result for -2147483648 - 1 : ");
    printf("%d\n", -2147483648 - 1 );
    printf("Result for -2147483648 - 2 : ");
    printf("%d\n", -2147483648 - 2 );
    return 0;
}
