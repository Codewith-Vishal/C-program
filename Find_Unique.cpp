#include<iostream>
using namespace std;

int Find_Unique1(int arr[] , int size) {
    int ans = arr[0];
    for(int i = 1; i<=size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}

int main() {
    int arr[7] = {2,3,4,5,2,3,4};
    int size = 7;

    int ans = Find_Unique1(arr , size);
    cout<<"Answer is :-->> "<<ans<<endl;
    return 0;
}