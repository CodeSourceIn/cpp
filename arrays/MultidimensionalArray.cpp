#include<iostream>
using namespace std;

void printarray(int m[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
             cout <<m[i][j] <<"   ";
        }
        cout << endl;
    }
}
int main() {
    int matA[3][3], matB[3][3], matC[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matA[i][j] = i + 1;
            matB[i][j] = j + 1;
        }
    }
    cout <<"The matrix A : " <<endl;
    printarray(matA);
    cout <<"----------------------------" <<endl;
    cout<<"The matrix B :"<<endl;
    printarray(matB);
    cout <<"----------------------------" <<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }
    cout <<"The sum of matrix A and B : " <<endl;
    printarray(matC);
    cout <<"----------------------------" <<endl;
    return 0;
}