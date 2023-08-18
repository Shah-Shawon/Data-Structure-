#include<bits/stdc++.h>
using namespace std ;

int main() 
{
    int n = 10, sz = 10;
    // Deaclaring a sorted integer array
    int a[12] = {1, 14, 27, 30, 43, 56, 69, 72, 85, 98};
    // Declaring a sorted string array
    string s[12] = {"Ali", "Amir", "Bashir", "Esan", "Hasan", "Jalal", "Kabir", "Liton", "Morshed", "Sojib"};

    //insert 54 to the arrray
    int val = 54,pos=-1;
    for(int i=0;i<sz;i++){
        if(val<=a[i]){
            pos = i;
            break;
        }
    }
    cout<<pos<<endl;
    for(int i=sz;i>=pos+1;i--){
        a[i] = a[i-1];
    }
    a[pos] = val;
    n=n+1;
    //Display
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    //insert Rahim to the arrray
    string name = "Rahim";
    int po=-1;
    for(int i=0;i<sz;i++){
        if(s[i]>=name){
            po = i;
            break;
        }
    }
    cout<<po+1<<endl;
    for(int i=sz;i>=po+1;i--){
        s[i] = s[i-1];
    }
    s[po] = name;
    sz = sz+1;
    for(int i=0;i<sz;i++){
        cout<<s[i]<<" ";
    }cout<<endl;
    //doing the same things for insert element in specific index
}