//finding missing number using XOR

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int missno(int a[], int n){
    int x1=a[1];
    int x2=1;
    for(int i=1; i<n; i++){
        x1=x1^a[i];
    }

    for(int i=2; i<=n+1; i++)
    {
        x2=x2^i;
    }

    return (x1^x2);
}
int main(){
    int arr[]={0,2,3,4};
    int N=sizeof(arr)/sizeof(arr[0]);
    int miss = missno(arr,N);
    cout<<miss;
    return 0;
}