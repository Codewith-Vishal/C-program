#include<iostream>
using namespace std;

int getlength(char ch[] ) {
    int count = 0;
    for(int i = 0; ch[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void get_swap(char name[] , int size) {

    int start = 0;
    int end = size-1;

    while(start<end) {
        swap(name[start++] , name[end--]);
    }
    cout<<name;

}

int main() {

    char ch[20];
    char name[6];
    cout<<"enter the name :- " << endl;
    cin >> ch;
    cout<<"Enter the second element :- "<<endl;
    cin>>name;

    int ans = getlength(ch);

    cout<<"Length of the string :- "<<ans<<endl;

    get_swap(name , 6);
    //cout<<name<<endl;
}