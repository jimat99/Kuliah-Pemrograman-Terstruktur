#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    char x[100], y[100], kalimat[100];
    printf("Input = ");
    gets(kalimat);
    printf("Kata yang diganti = ");
    gets(y);
    printf("Diganti kata = ");
    gets(x);

    for(int i=0; i<strlen(kalimat); i++){
        for(int j=0; j<strlen(y); j++){
            if(kalimat[i]==y[j]){
            kalimat[i]=x[j];
            }
        }
    }
    printf("Hasil = %s", kalimat);
    printf("\n");
}
