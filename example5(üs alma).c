#include <stdio.h>
#include <math.h>

void usalma(int sayi1, int sayi2)
{
    int sonuc;
    sonuc = pow(sayi1,sayi2);

    printf("Islemin sonucu = %d", sonuc);
}

int main()
{
    int sayi1, sayi2;

    printf("1.sayiyi girin :")
    scanf("%d", &sayi1);

    printf("2.sayiyi girin :")
    scanf("%d", &sayi2);

    usalma(sayi1,sayi2);
}

int main()
{
    usalma(10,3);
}