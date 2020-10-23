#include "tugas_asisten.h"

int main(){
    char kalimat[100];
    int a, b;

    cout<<"Kalimat : ";
    cin.getline(kalimat, 100);

    cout<<endl<<"ASCII : ";
    fungsiASCII(kalimat);

    for(int i=0; i<strlen(kalimat); i++){
        if(i==0 && kalimat[i]!=32){
            a=(int)kalimat[i];
        }
        else if(i>=1 && kalimat[i]!=32){
            b=a+(int)kalimat[i];
            a=b;
        }
    }
    cout<<endl<<endl<<"Total : "<<a<<endl;
}
