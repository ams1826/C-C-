// insert number at index

#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,50,60,70,80,90,100};
    int e = 40;
    int i = 3;
    int N = sizeof(arr)/sizeof(arr[0]);
    
    while(i<=N){
        arr[N+1] = arr[N];
        N--;
    }
    arr[i] = e;

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int j=0; j<=n; j++)
    cout<<arr[j]<<" ";
    return 0;
}