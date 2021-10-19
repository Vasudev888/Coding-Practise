//Program to find peak element
//Peak Element is Higher than its neighbouring elements
#include <iostream>
using namespace std;

int findPeak(int arr[], int n){
    if (n == 1){
        return 0;
    }
    if (arr[0] > arr[1]){
        return 0;
    }
    if (arr[n - 1] > arr[n - 2]){
        return n-1;
    }
    for (int i = 0; i < n; i++) {
        if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]){
            return i;
        }
    }
    return 0;
}

int main(){
    int arr[10], n;

    cout <<"\n Enter the size of the array : ";
    cin >> n;

    cout << "\n Enter the elements of the array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "\n Entered Elements are : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n Index of Peak element is : " << findPeak(arr, n);
}