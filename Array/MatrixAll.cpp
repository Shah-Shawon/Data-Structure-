#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Declaring 2 matrix
    int mat1[3][3] = {
        {2, 3, 4},
        {3, 2, 1},
        {1, 4, 3}
    };
    int mat2[3][3] = {
        {2, 3, 1},
        {3, 2, 4},
        {4, 1, 3}
    };
    //Perform Addition
    int sum[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    //Display Addition
    cout << "Addition : \n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    //Perform Subtraction
    int sub[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sub[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    //Display Subtraction
    cout << "Subtraction : \n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }
    //Perform Multiplication
    int mul[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mul[i][j] = 0;
            for(int k=0;k<3;k++){
                mul[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    //Display ction
    cout << "Multiplication : \n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
}