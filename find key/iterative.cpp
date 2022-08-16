//iterative approach

#include<bits/stdc++.h>

using namespace std;

int bs(int arr[], int l, int r, int x)
{
    while(l<=r)
    {
        int m=l+(r-l)/2;
        
        if(arr[m]==x)
        return m;
        
        if(arr[m]<x)
        l=m+1;
        
        else
        r=m-1;
    }
    
    return -1;
}

int main(void)
{
    int arr[]={1, 2, 4, 78, 89};
    int x=3;
    
    int n =sizeof(arr)/sizeof(arr[0]);
    
    int result= bs(arr, 0, n-1, x);
    (result==-1)
    ? cout<<"element not exists"
    : cout<<"element found at " <<result;
    
    return 0;
}