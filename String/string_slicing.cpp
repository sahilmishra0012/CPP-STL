#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "My name is Sahil Mishra";

    int idx = s.find("Sahil");
    cout<<idx<<endl;

    string wordToBeRemoved = "Mishra";
    s.erase(s.find(wordToBeRemoved),wordToBeRemoved.length());
    cout<<s<<endl;
    
}