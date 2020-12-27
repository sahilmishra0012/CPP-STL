#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a[] = {1,2,3,4,4,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = sizeof(a)/sizeof(a[0]);
    int elementToBeFound = 4;

    bool present = binary_search(a, a+size, elementToBeFound);
    if(present){
        cout << "Key present" << endl;
    }
    else{
        cout << "Key not present"  << endl;
    }
    
}