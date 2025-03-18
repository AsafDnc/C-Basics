#include <stdio.h>

int topla(int sayi1 , int sayi2)
{
    int toplam;
    toplam= sayi1 + sayi2;
    return toplam;
}

int main()
{
    int sonuc;
    sonuc = topla(20,10);
    printf("Toplam = %d", sonuc);
}