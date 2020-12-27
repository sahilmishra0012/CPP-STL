#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int a = 10;
    int b = 20;
    swap(a,b);
    cout<<a<<" and "<<b<<endl;
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);

    reverse(arr,arr+3);

    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<< endl;
    }
}