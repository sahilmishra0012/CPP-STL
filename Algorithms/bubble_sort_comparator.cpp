#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b){
    cout << "Comparing "<< a << " and " << b << endl;
    return a > b;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int a[], int size, bool cmp(int a, int b)){
    for(int i=0; i<size-1;i++)
    {
        for(int j=0; j<size-i-1;j++)
        {
            if(cmp(a[j],a[j+1])){
                swap(a[j],a[j+1]);
            }

        }
    }
}

int main(){
    int a[] = {7,6,8,0,9,5,6,5,3,21,4,433,646,2};
    int size = sizeof(a)/sizeof(a[0]);
    
    bubbleSort(a, size, compare);

    for(int i=0; i<size;i++){
        cout<<a[i]<<endl;
    }
    
}