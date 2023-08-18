#include<bits/stdc++.h>
using namespace std;
 int main(){
    int arr1[5],arr2[5],finarr[10];

    cout<<"Enter the elements of first arrray: ";
    for(int i = 0;i<5;i++){
        cin>>arr1[i];
    }

    cout<<"Enter the elements of second array:";
    for(int i = 0;i<5;i++){
        cin>>arr2[i];
    }

    int index = 0;
    
    for(int i = 0;i<5;i++){
        finarr[index] = arr1[i];
        index++; 
    }
    for(int i = 0;i<5;i++){
        finarr[index] = arr2[i];
        index++;
    }

    for(int i=0;i<10;i++){
        cout<<finarr[i]<<" ";
    }
    cout<<endl;
 }