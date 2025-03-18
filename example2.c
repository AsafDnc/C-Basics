#include <stdio.h>
#include <stdlib.h>

int main() {
    int vize, fnl;
    printf("Vize notunu girin: ");
    scanf("%d", &vize);

    printf("Final notunu girin: ");
    scanf("%d", &fnl);

    float ortalama = vize*0.4 + fnl*0.6;
    if(ortalama >= 60) {
        printf("%f ortalama ile geçti ", ortalama);
    }
    else {
        printf("%f ortalama ile kaldi", ortalama);
    }



}