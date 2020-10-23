#include "main.h"

using namespace std;

int main(){
    char kalimat[100];

    cout<<"Kalimat : ";
    cin.getline(kalimat, 100);

    fungsiKonversi(kalimat);
    cout<<endl<<"Konversi : "<<kalimat<<endl;
}
