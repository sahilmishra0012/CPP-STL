#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int a[] = {10,20,30,40,50};
    int size = sizeof(a)/sizeof(a[0]);
    
    rotate(a, a+1, a+size);

    for(int i=0; i<size;i++)
    {
        cout<<a[i]<< endl;
    }

    cout<<endl;

    vector<int> v{10,20,30,40,50};
    rotate(v.begin(),v.begin()+2,v.end());

    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<< endl;
    }

    cout<<endl;

    vector<int> v1{1,2,3};
    next_permutation(v1.begin(),v1.end()); // Returns next greater number

    for(int x:v1){
        cout<<x<<endl;
    }
}