#include <iostream>

using namespace std;

int main(){
    char input[100];

        cout<<"Input = ";
        cin.getline(input, 100);

        cout<<endl<<"Tanggal : ";
        for(int i=0; i<2; i++){
            cout<<input[i];
        }

        cout<<endl<<"Bulan : ";
        for(int j=2; j<4; j++){
            cout<<input[j];
        }

        cout<<endl<<"Tahun : ";
        for(int k=4; k<8; k++){
            cout<<input[k];
        }
        cout<<endl;
}
