#include <iostream>
using namespace std;

int main() {
    int marks = 88;
    char grade;
    switch(marks / 10){
        case 10:  grade = 'S';
                  break;
        case 9 :  grade = 'A';
                  break;
        case 8 :  grade = 'B';
                  break;
        case 7 :  grade = 'C';
                  break;
        case 6 :  grade = 'D';
                  break;
        case 5 :  grade = 'E';
                  break;
        default : grade = 'F';
      }
    cout <<"Mark is = "<<marks <<endl;
    cout <<"Grade is = "<<grade <<endl;
    return 0;
}