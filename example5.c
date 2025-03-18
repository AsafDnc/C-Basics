#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taban, us, sonuc;
    priintf("Tabani girin: ");
    scanf("%d", &taban);
    prntf("Us girin: ");
    scanf("%d", &us);
    sonuc = pow(taban,us);
    printf("%d uzeri %d = %d", taban, us, sonuc);
return 0;
}