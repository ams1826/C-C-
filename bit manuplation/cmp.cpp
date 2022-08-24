#include<iostream>
using namespace std;

bool oppositesign(int x, int y){
    return ((x^y)<0);
}

int main(){
    int x=100 , y=10;
    if(oppositesign(x,y)==true)
    cout<<"signs are oppositesign ";
    else
    cout<<"same sign ";
    return 0;
}


// asuming that bit numbering starts from 1.
// wap to set a particular bit in a given number