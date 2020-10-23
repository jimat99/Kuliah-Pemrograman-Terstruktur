#include <iostream>

using namespace std;

int main(){

    char pilihan;
    cout<<"   Pilihan :\n";
    cout<<"   1. Deret Segitiga Pascal\n";
    cout<<"   2. Konversi Angka ke Huruf\n";
    cout<<"   3. Persegi Strip yang Diapit Pagar\n\n";
    cout<<"Masukkan pilihan Anda (1/2/3) = ";
    cin>>pilihan;
    cout<<endl;

    switch(pilihan){
    case'1':
    {int x, y, a, i, k, j;
    cout<<"1. Deret Segitiga Pascal\n\n";
    cout<<"X = ";
    cin>>x;
    cout<<"Y = ";
    cin>>y;
    cout<<"\n";

    for(i=x-1; i<y; i++){
        for(k=0; k<=((2*y)-(2*i)); k++){
            cout<<" ";
            }
            for(j=0; j<=i; j++){
            j==0||i==j ? a=1 : a=a*(i+1-j)/j;
            cout<<"   "<<a%10;
        }
            cout<<"\n";
        }
    }
    break;

    case'2':
        {string angka;
        int i;
        cout<<"2. Konversi Angka ke Huruf\n\n";
        cout<<"Angka yang ingin dikonversikan = ";
        cin>>angka;
        cout<<"Hasil konversi = ";

        for(i=0; i<=angka.length(); i++){
            switch(angka[i]){
            case'1':
                cout<<"Satu ";
                break;
            case'2':
                cout<<"Dua ";
                break;
            case'3':
                cout<<"Tiga ";
                break;
            case'4':
                cout<<"Empat ";
                break;
            case'5':
                cout<<"Lima ";
                break;
            case'6':
                cout<<"Enam ";
                break;
            case'7':
                cout<<"Tujuh ";
                break;
            case'8':
                cout<<"Delapan ";
                break;
            case'9':
                cout<<"Sembilan ";
                break;
            case'0':
                cout<<"Nol ";
                break;
            default:
                cout<<endl;
                break;
            }
        }
    }
        break;

    case'3':
    {int batas, a, b;
    cout<<"3. Persegi Strip yang Diapit Pagar\n\n";
    cout<<"Batas = ";
    cin>>batas;
    cout<<endl;

        for(a=0; a<batas; a++){
            for(b=0; b<batas; b++){
                if(a==0||a==batas-1){
                    cout<<"# ";
                }
                else if(b==0||b==batas-1){
                    cout<<"# ";
                }
                else{
                     cout<<"- ";
                }
              }
            cout<<endl;
        }
    }
    break;
    default:
        cout<<"Pilih yang ada di menu saja !\n";
    }
}
