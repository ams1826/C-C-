//finding missing number

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int missno(int a[], int n){
    int N;
    if(a[0]==0)
    N=n;
    else
    N=n+1;
    
    int total= N*(N+1)/2;
    for(int i=0; i<n; i++)
    total-=a[i];

    return total;
}
int main(){
    int arr[]={1,2,3,5};
    int N=sizeof(arr)/sizeof(arr[0]);
    int miss = missno(arr,N);
    cout<<endl<<"\t \t The array is { ";
    for(int i=0; i<N; i++)
    cout<<arr[i]<<"  ";
    cout<<"}";
    cout<<endl<<"\t \t The missimg numner in araay is "<<miss<<endl<<endl;
    return 0;
}