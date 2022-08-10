/*
       2nd method
linear search for max element when there is
only 1 elemnt in the array
when max amd min element are present at 1st and 2nd position
when there is more number in array
*/
#include<iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

Pair getminmax(int arr[], int n)
{
    struct Pair minmax;
    int i;

    if(n==1){
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
    }

    if(arr[0]>arr[1]){
        minmax.max=arr[0];
        minmax.min=arr[1];
    }
    else{
        minmax.max=arr[1];
        minmax.min=arr[0];
    }

    for(i=2; i<n; i++){
        if(arr[i]>minmax.max)
        minmax.max=arr[i];

        else if(arr[i]<minmax.min)
        minmax.min=arr[i];
    }

return minmax;
}
int main(){
    int arr[]={1000,11,3000,445,1,330};
    int sizee=6;
    struct Pair minmax = getminmax(arr , sizee);
    cout<<"min ele "<<minmax.min<<endl;
    cout<<"max ele "<<minmax.max;
    return 0;
}