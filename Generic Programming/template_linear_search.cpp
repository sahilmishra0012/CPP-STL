#include<iostream>
using namespace std;


template <typename T> // Or we may use typename<class T>
int search(T a[], int n, T key){
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        return i;
    }
    return n;
}

int main(){
    int intArray[] = {1,2,3,4,12,11,45,8,9,5};
    int intArraySize = sizeof(intArray)/sizeof(intArray[0]);
    int intKey =11;
    cout<<search(intArray,intArraySize,intKey)<<endl;

    int charArray[] = {'a','c','i','b','h','d'};
    int charArraySize = sizeof(charArray)/sizeof(charArray[0]);
    int charKey ='i';
    cout<<search(charArray,charArraySize,charKey)<<endl;
}