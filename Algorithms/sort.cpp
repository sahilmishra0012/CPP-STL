#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b){
    cout << "Comparing "<< a << " and " << b << endl;
    return a < b;
}

int main(){
    int a[] = {7,6,8,0,9,5,6,5,3,21,4,433,646,2};
    int size = sizeof(a)/sizeof(a[0]);
    
    sort(a, a+size, compare);

    for(int i=0; i<size;i++){
        cout<<a[i]<<endl;
    }
    
}