//Program to find Max and min Elements from the given array
#include <iostream>
using namespace std;

void findMaxandMin(int arr[], int n){
    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "\n Max element is : " << max;
    cout << "\n Min element is : " << min;
}

int main(){
    int n, arr[10];

    cout << "\n Enter the size of the array : ";
    cin >> n;

    cout << "\n Enter the elements : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "\n Entered elements are : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    findMaxandMin(arr, n);

}