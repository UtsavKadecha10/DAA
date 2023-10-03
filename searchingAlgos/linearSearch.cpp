#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int item) {
    for(int i = 0; i<size; i++) {
        if(arr[i] == item) {
            return i;
        }
    }
}  
int main(){
    int arr[]={30, 40, 20, 10, 50};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    int item;
    cout<<"Enter number to be found: "<<endl;
    cin>>item;
    linearSearch(arr, arr_size, item);
    return 0;
}
