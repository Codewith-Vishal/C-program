#include<iostream>
using namespace std;

// Printing the array
void printing(int arr[] , int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    } cout<<endl;
}

// Two pointer approach
void swap_alternate(int arr[] , int size) {
    int first = 0;
    int second = 1;

    while(first < size && second <= size) {
        swap(arr[first] , arr[second]);
        first += 2;
        second += 2;
    }
}

// Using for loop
void Swap_alter(int arr[] , int size) {

    for(int i = 0; i<size; i += 2) {
        if((i+1) < size) {
            swap(arr[i] , arr[i+1]);
        }
    }
}

int main() {

    int odd[5] = {3,4,6,7,9};
    int even[6] = {3,4,6,7,9,10};
    int size = 5;

    Swap_alter(odd , size);
    printing(odd , size);
    Swap_alter(even , 6);
    printing(even , 6);

    return 0;
}