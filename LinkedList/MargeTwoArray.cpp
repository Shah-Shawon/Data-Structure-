#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[10],arr[10],arrfinal[20];
    cout<<"enter the size of the 1st array: ";
    int fst;
    cin>>fst;
    cout<<"enter the element of the 1st array: ";
    for(int i = 0;i<fst;i++){
        cin>>ar[i];
    }
    cout<<"First array are: ";
    for(int i = 0;i<fst;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    cout<<"enter the size of the 2nd array: ";
    int snd;
    cin>>snd;
    cout<<"enter the element of the 2nd array: ";
    for(int i = 0;i<snd;i++){
        cin>>arr[i];
    }
    cout<<"second array are: ";
    for(int i = 0;i<snd;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int index = 0;
    int n = fst+snd;
    for(int i = 0;i<fst;i++){
        arrfinal[i]=ar[i];
        index++;
    }
    for(int i = 0;i<snd;i++){
        arrfinal[index]=arr[i];
        index++;
    }
    cout<<"Final arrray are: ";
    for(int i = 0;i<n;i++){
        cout<<arrfinal[i]<<" ";
    }
    cout<<endl;
}