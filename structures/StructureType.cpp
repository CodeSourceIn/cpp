#include <iostream>
using namespace std;

struct employee {
    int empid;
    int year;
    float salary;
};
int main() {
    employee e;
    e.empid = 1234;
    e.year = 2;
    e.salary = 25000.00;
    cout <<"Employee Details :" <<endl;
    cout <<"------------------" <<endl;
    cout <<"Employee ID : " <<e.empid <<endl;
    cout <<"Years of experience : " <<e.year <<endl;
    cout <<"Salary : " <<e.salary <<endl;
    return 0;
}

