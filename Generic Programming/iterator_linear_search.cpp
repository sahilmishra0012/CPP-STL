#include<iostream>
#include<list>
using namespace std;

template <typename ForwardIterator, typename T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key){
    while(start != end)
    {
        if(*start == key)
        {
            return start;
        }
        else
        {
            start++;
        }
    }
    return end;
}

int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(4);
    l.push_back(9);
    l.push_back(3);
    l.push_back(8);
    auto output = search(l.begin(),l.end(),4);
    if(output ==l.end()){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found"<<endl;
    }
}
