#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    char kata[100], kata2[100];
    cout<<"Input : ";
    gets(kata);
    strcpy(kata2, strlwr(kata));

    cout<<"Ejaan Lama : ";
    for(int i=0;i<strlen(kata2);i++){
        if(kata2[i]=='u'){
            cout<<"oe";
        }
        else if(kata2[i]=='j'){
            cout<<"dj";
        }
        else if(kata2[i]=='y'){
            cout<<"j";
        }
        else if(kata2[i]=='c'){
            cout<<"tj";
        }
        else{
            cout<<kata2[i];
        }
    }
    cout<<endl;
    cout<<"EYD : "<<strlwr(kata)<<endl;
}
