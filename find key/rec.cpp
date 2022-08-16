//recursive search
#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int l, int r, int k){

    if(r>=l){
        int mid = l+(r-l)/2;

        if(arr[mid]==k)
        return mid;

        if(arr[mid]<k)
        return bs(arr, mid+1, r, k);

        return bs(arr, l, mid-1, k);
    }

    return -1;
}

int main(void){
    int arr[] = {2,3,4,10,40};
    int k = 40;
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = bs(arr, 0, n-1, k);
    (result==-1)
    ?cout<<"element not found"
    :cout<<"element found "<<result;

    return 0;
}