#include<iostream>
using namespace std;

void insertionSort(int *arr, int n){
    int temp, ptr;
    for(int i=0; i<n; i++){
        temp=arr[i];
        ptr=i-1;
        while(temp<arr[ptr] && ptr!=-1){
            arr[ptr+1]=arr[ptr];
            ptr=ptr-1;
        }
        arr[ptr+1]=temp;
 
    } 
}
void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={8, 7, 1, 3, 5, 4, 2, 6};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, arr_size);
    cout<<"Sorted array will be: "<<endl;
    printArray(arr, arr_size);
    return 0;
}
