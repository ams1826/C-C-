//sum of n terms using recursion

#include<iostream>
using namespace std;

int sum(int n){
    if((n==1) || (n<=0))
    return n;

    else
    return n+sum(n-1);
}

int main(){
    int a = 5;
    cout<<"Sum of n numbers is "<<sum(a);
    return 0;
}