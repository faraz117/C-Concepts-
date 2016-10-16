// Example program
#include <iostream>
#include <string>

using namespace std;

template<class TYPE>
void printTwice(TYPE data){
    cout<< data * 2 << endl;
}

template<class TYPE>
TYPE computeTwice(TYPE data){
    return data * 2 ;
}

int main()
{
    printTwice(3.14);
    printTwice(1000000000000);
    printTwice(2);
    cout<<computeTwice(3.14)<<endl;
    cout<<computeTwice(1000000000000)<<endl;
    cout<<computeTwice(2)<<endl;
}
