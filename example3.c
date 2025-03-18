#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Çift sayilar: ");
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
        printf("%d ", i);
        }
    }

    printf("Tek sayilar: ");
    for(int i = 1; i <= 100; i++) {
        if(i % 2 != 0) {
        printf("%d ", i);
        }
    }

    return 0;
}
