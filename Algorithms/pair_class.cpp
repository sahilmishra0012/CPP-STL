#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    pair<int,int> p;
    p.first = 10;
    p.second = 20;
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,int> p1(p); //Object Copying :  Not Referencing
    
    cout<<p1.first<<" "<<p1.second<<endl;

    int a = 10;
    int b = 20;

    pair<int,int> p2 = make_pair(a,b);

    cout<<p2.first<<" "<<p2.second<<endl;

    int c = 30;

    pair<pair<int,int>,int> p3;

    p3.first.first = a;
    p3.first.second = b;
    p3.second = c;

    cout<<p3.first.first<<" "<<p3.first.second<<" "<<p3.second<<endl;


}