#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <iostream>
#include <string.h>
#include <stdlib.h>

char fungsiKonversi(char kalimat2[100]){
    for(int i=0; i<strlen(kalimat2); i++){
        if(kalimat2[i]>=65 && kalimat2[i]<=90){
            kalimat2[i]=kalimat2[i] + 32;
        }
        else if(kalimat2[i]>=97 && kalimat2[i]<=122){
            kalimat2[i]=kalimat2[i] - 32;
        }
    }
}
#endif // MAIN_H_INCLUDED
