//try codes for trail run only
#include<iostream>
using namespace std;

int bs(int arr[], int l, int r, int k){

    if(r>=1){
        int mid = l+(r-l)/2;

        if(arr[mid]==k)
        return mid;

        if(arr[mid]>k)
        return bs(arr, l, mid-1, k);

        return bs(arr, mid+1, r, k);
    }

    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,11};
    int k = 11;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = bs(arr, 0, n-1, k);(result==-1)
    ?cout<<"element not found":cout<<"element found "<<result;
    return 0;
}