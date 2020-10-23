#include "tugasdosen.h"

using namespace std;

int main(){
    int deret;

    cout<<"Deret Fibonacci : ";
    cin>>deret;
    cout<<endl;

    cout<<"Hasil : ";
    for(int i=1; i<=deret; i++){
       cout<<Fibonacci(i)<<" ";
    }
    cout<<endl;
}
