#include<iostream>
using namespace std;

int binarySearch(int *arr, int low, int item, int high){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==item){
            return mid;
        }
        else if(arr[mid]>item){
            high=mid-1;
        }
        else{ 
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={10, 20, 30, 40, 50};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    int item;
    int mid;
    cout<<"Enter no. to be found: ";
    cin>>item;
    int result = binarySearch(arr, 0, item, arr_size-1);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
