//finding missing number using XOR

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int missno(int a[], int n){
    int x1=a[0] , start=1;
    int x2=1 , ex2=n+1;

    if(a[0]==0){
        x1=a[1];
        start=2;
        ex2=n;
    }

    for(int i=start; i<n; i++){
        cout<<x1<<" ";
        x1=x1^a[i];
        cout<<x1<<endl;
    }
    cout<<"\n\n";
    for(int i=2; i<=ex2; i++){
        cout<<x2<<" ";
        x2=x2^i;
        cout<<x2<<endl;
    }

    return (x1^x2);
}
int main(){
    int arr[]={2,3,4,5};
    int N=sizeof(arr)/sizeof(arr[0]);
    int miss = missno(arr,N);
    cout<<"\n\n";
    cout<<miss;
    return 0;
}