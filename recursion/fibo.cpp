//printing fibonacci series using recursion

#include<iostream>
using namespace std;

int fibo(int n){
    // cout<<n<<endl;
    if((n==1) || (n==0))
    return n;

    else
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int x = 5 ,i=0;
    while(i < x) {
      cout <<" "<<fibo(i);
      i++;
    }
    return 0;
}