// Example program
#include <iostream>
#include <string>

using namespace std;

template<class Type1, class Type2>
class Pair{
    private:
    Type1 first;
    Type2 second;
    
    public:
    //Pair() : first(Type1()), second(Type2()){}
    Pair(const Type1& t1, const Type2& t2) : 
    first(t1), second(t2){} 
    Pair(const Pair<Type1, Type2>& OtherPair) : 
    first(OtherPair.first),
    second(OtherPair.second)
    {}
    void printData(){
        cout<<first<<endl;
        cout<<second<<endl;
    }
};

template<class T>
class Thing {
    T Data;
public:    
    Thing() : Data (T()){ // Sets the default data Type.
    }
    T getData () const {
        return Data;
    }
    void setData(T value){
        Data = value;
    }
    void printData(){
        cout << Data <<endl;
    }
    void removeData(){
        Data=T();
    }
};

int main (){
    Thing<float> stuff;
    stuff.printData();
    stuff.setData(3.14);
    stuff.printData();
    stuff.removeData();
    stuff.printData();
    /// Pair //
    Pair<int,int> duple(21,10);
    duple.printData();
    Pair<int,int> duple1(duple);
    duple1.printData();
}
