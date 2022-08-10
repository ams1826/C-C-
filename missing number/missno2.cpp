//finding missing number using XOR

take array
check first element is zero operator not
if zero:
    for loop 1
        x1 = a[1]  because start index value is zero
        i will start from index 2 {a[2]} because value of index 1 is stored in x1 so loop will start from index 2
    for loop 2
        x2 will run to n because if we do not count zero the value of n is counted as n+1
        we are not removing zero but we are not counting it too
        in frirst loop we haven't removed zero we didn't counted it
            if the nummber of array elements are 'x' including 0 which is considered as null
            this is why loop 2 will run to 'x'

if not zero:
    for loop 1
        x1 = a[0] because start index value is not zero
        i will start from index 1 {a[1]} because value of index 0 is stored in x1 so loop will start from index 1
    for loop 2
        x2 will run to n+1 because there is not zero in array
        note that zero is not present
        now there is not zero in the array it means
            if the nummber of array elements are 'y'
            then we have to run loop 2 to 'y+1' because this time there is not any extra or null value whose space will be counted



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