#include<bits/stdc++.h>

using namespace std;

int ts(int l, int r, int x, int arr[])
{
    if( r>=l)
    {
        int mid1=l +(r-l)/3;
        int mid2=r -(r-l)/3;
        
        if(arr[mid1]==x)
        {
            return mid1;
        }
        
        if(arr[mid2]==x)
        {
            return mid2;
        }
        
        if(x < arr[mid1])
        {
            return ts(l, mid1-1, x, arr);
        }
        else if(x>arr[mid2])
        {
            return ts(mid2+1, r, x, arr);
        }
        else
        {
            return ts(mid1+1, mid2-1, x, arr);
        }
    }
    
    return -1;
}

int main()
{
    int l, r, p, x;
    
    int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    l=0;
    
    r=9;
    
    x=5;
    
    p=ts(l, r, x, arr);
    
    cout<<"index of :"<<x<<" is "<<p<<endl;
    
    return 0;
}