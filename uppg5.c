/* 
    Uppg5:
    1) Läs in ett heltal från tangentbordet
    2) skapa en multiplikationstabell för talet upp till 10 x talet
    3) Skriv ut din gångertabell, ett tal per rad (så 10 rader)
    OBS: Ingen övrig formatering eller text. Bara siffror och radbrytningar.
*/

#include <stdio.h>


int main(){

    // Skriv din kod här i main

    int num;
    scanf("%d", &num);

    for (int i = 1; i < 11; i++) {
        printf("%d\n", num * i);
    }

    return 0;
}