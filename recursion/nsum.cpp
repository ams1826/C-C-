#include<iostream>
using namespace std;

int sum(int n){
    if(n==1)
    return 1;

    else if(n<=0)
    return 0;

    else
    return n+sum(n-1);
}

int main(){
    int a = 5;
    cout<<sum(a);
    return 0;
}