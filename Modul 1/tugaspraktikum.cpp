#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int gajilaki = 210, gajiperempuan=493;
    long int totalgajilaki, totalgajiperempuan;
    char x[100], y[100];
    float totalgajisemua;
    double pajak;

    puts("X = ");
    gets(x);
    puts("Y = ");
    gets(y);
    puts("");

    int x1 = atoi(x);
    int y1 = atoi(y);

    totalgajilaki = (x1*gajilaki)*8*7;
    totalgajiperempuan = (y1*gajiperempuan)*8*7;
    totalgajisemua = totalgajilaki + totalgajiperempuan;
    pajak = totalgajisemua*5/100;

    printf("Total gaji karyawan Laki-Laki = %ld \n",totalgajilaki);
    printf("Total gaji karyawan Perempuan = %ld \n",totalgajiperempuan);
    printf("Total gaji = %1.0f \n",totalgajisemua);
    printf("Pajak yang dibayarkan = %1.1lf \n",pajak);
}
