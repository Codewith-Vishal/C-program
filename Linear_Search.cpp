#include<iostream>
using namespace std;

bool Linear_Search(int arr[] , int size , int key) {
    for(int i = 0; i<size; i++) {
        if(arr[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[5] = {2,5,6,3,8};
    int key = 88;
    int size = 5;

    if(Linear_Search(arr , key , size)) {
        cout<<"Present---->>"<<endl;
    }
    else{
        cout<<"Not Present"<<endl;
    }

}