#include<iostream>
using namespace std;

struct Rational
{
    int nume;
    int deno;
};

int main(){
    struct Rational r1,r2,r3;
    r1.nume = 3;
    r1.deno = 5;
    r2.nume = 2;
    r2.deno = 5;
    r3.nume = ((r1.nume*r2.deno)+(r1.deno*r2.nume));
    r3.deno = (r1.deno*r2.deno);
    cout<<r3.nume;
    cout<<"/"<<r3.deno;
    return 0;
}