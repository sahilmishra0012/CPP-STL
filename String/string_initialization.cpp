#include <iostream>
#include <string>
using namespace std;

int main(){
    string s0;
    string s1("Hello");
    string s2 = "Hi";
    string s3(s2); // Just a Copy... Not Reference
    string s4 = s1;
    char arr[] = {'H','e','l','l','o','\0'};
    string s5(arr);

    cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<endl;

    if(s0.empty()){
        cout<<"Empty String"<<endl;
    }

    cout<<s0.append("Holla")<< endl;

    s1 +=" World";

    cout<<s1<<endl;

    cout<<s0.length()<<endl;
    s0.erase();
    cout<<s0.length()<<endl;

    cout<<s1.compare(s5)<<endl;
    cout<<(s1>s5)<<endl;

}