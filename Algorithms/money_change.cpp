#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a<=b;
}

int main(){
    int a[] = {1,2,5,10,20,50,100,200,500,2000};
    int size = sizeof(a)/sizeof(a[0]);
    int money = 168;
    while(money!=0){
        int index = lower_bound(a, a+size, money, compare) - a - 1;
        money -= a[index];
        cout << a[index] << endl;
    }
}