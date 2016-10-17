// Example program
#include <iostream>
#include <string>

using namespace std;

template<class T>
void printTwice(T data){
    cout<< data * 2 << endl;
}

template<class T>
T computeTwice(T data){
    return data * 2 ;
}

template<class T>
const T& findMax( const T& T1 , const T& T2){
    return T1 > T2 ? T1 : T2;
}

int main()
{
    printTwice(3.14);
    printTwice(1000000000000);
    printTwice(2);
    cout<<computeTwice(3.14)<<endl;
    cout<<computeTwice(1000000000000)<<endl;
    cout<<computeTwice(2)<<endl;
    // initialization required if your passing in references
    int i = 2; 
    int j = 23;
    cout << "Max Value is : "<< findMax(i,j)<<endl;
}
