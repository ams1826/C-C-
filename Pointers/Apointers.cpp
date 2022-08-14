#include<iostream>
using namespace std;
int main(){
    int i=44;
    int *j=&i;
    cout<<"value of i is "<<i<<endl;
    cout<<"value of i is "<<*j<<endl;
    cout<<"\naddress of i is "<<&i<<endl;
    cout<<"address of i is "<<j<<endl;
    cout<<"\n address of j is "<<&j<<endl;
    cout<<"\n value of j is "<<*(&j)<<endl;
    return 0;
}