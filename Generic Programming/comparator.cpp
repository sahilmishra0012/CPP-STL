#include<iostream>
#include<list>
using namespace std;

class Book{
    public:
        string name;
        int price;
    
    Book(string name, int price){
        this->name = name;
        this->price = price;
    }
};

class BookCompare{
    public:
        bool operator()(Book A, Book B){
            if(A.name == B.name && A.price == B.price){
                return true;
            }
            else{
                return false;
            }
        }
};

template <typename ForwardIterator, typename T, class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp){
    while(start != end)
    {
        if(cmp(*start,key))
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
    list<Book> l;
    Book b1("Computer",100);
    Book b2("Physics",110);
    Book b3("Maths",200);
    Book b4("Biology",150);
    Book b5("History",120);
    Book b6("English",130);
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);
    l.push_back(b4);
    l.push_back(b5);
    l.push_back(b6);

    Book bookToFind("History",120);

    BookCompare cmp;

    auto it =search(l.begin(),l.end(),bookToFind,cmp);

    if(it!=l.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    
}