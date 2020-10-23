#include <iostream>

using namespace std;

int main(){
    int deret;
    cout<<"Deret Bilangan Ganjil = ";
    cin>>deret;

    for(int i=0; i<=deret; i++){
        if(i%2!=0&&i!=7){
            cout<<i<<" ";
        }
        else if(i==7){
            cout<<"Tujuh ";
        }
    }
        cout<<endl;
}
