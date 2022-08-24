#include<iostream>
using namespace std;
int main(){
    int num, bit, temp;
    cout<<"enter no. ";
    cin>>num;
    cout<<"enter the bit num ";
    cin>>bit;
    temp=(bit-1)<<1;
    num = num^temp;
    cout<<"value after setting bit "<<num;
    return 0;
}

//      4 3 2 1
// no 14 = 1 1 1 0
// pos 2 = 0 0 1 0
//              -1
//         0 0 0 1 --> left shift

//         0 0 1 0

//         1 1 1 0
//         0 0 1 0
//        """"""""""
//         1 1 0 0 --> 12