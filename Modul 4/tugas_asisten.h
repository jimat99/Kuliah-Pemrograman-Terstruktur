#ifndef TUGAS_ASISTEN_H_INCLUDED
#define TUGAS_ASISTEN_H_INCLUDED

#include <iostream>
#include <string.h>

using namespace std;

char fungsiASCII(char kalimat2[100]){
    for(int i=0; i<strlen(kalimat2); i++){
            if(kalimat2[i]==32){
                cout<<"spasi ";
            }
            else{
        cout<<(int)kalimat2[i]<<" ";
            }
    }
}

#endif // TUGAS_ASISTEN_H_INCLUDED
