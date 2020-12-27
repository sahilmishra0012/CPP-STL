#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a[] = {1,2,3,4,4,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = sizeof(a)/sizeof(a[0]);
    int elementToBeFound = 4;

    auto lb = lower_bound(a, a+size, elementToBeFound);
    cout << "First Occurence of the Key (>=Key) " << (lb-a) << endl;
    auto ub = upper_bound(a, a+size, elementToBeFound);
    cout << "Upper Bound (>Key) Index " << (ub-a) << endl;
    cout << "Frequency of Key " << ub - lb << endl;

    if((lb-a)==size){
        cout << "Key Not Found" << endl;
    }
    
}