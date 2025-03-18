#include <stdio.h>

void nothesapla(float vize, float final)
{
    float puan = (vize * 0.4) + (final * 0.6);
    printf("Notunuz = %f", puan);

    if(puan > 60) {
        printf("Dersi geçtiniz.");
    }
    else if (puan > 50) {
        printf("Dersi sorumlu geçtiniz.");
    }
    else {
        printf("Dersten kaldiniz.");
    }
}

int main() 
{
    nothesapla(60,75);
}