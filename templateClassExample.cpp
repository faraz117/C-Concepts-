// Example program
#include <iostream>
#include <string>

using namespace std;

template<class T>
class Thing {
    T Data;
    Thing() : Data (T()){ // Sets the default data Type.
    }
    T getData () const {
        return Data;
    }
    T setData(T value){
        Data = value;
    }
    void printData(){
        cout << Data;
    }
    int removeData(){
        Data=T();
    }
}

int main (){
    
}
