/* 
    Uppg4:
    1) Läs in en sträng från tangentbordet (max 20 tecken)
    2) Ta fram det tredje tecknet i strängen (ex: "hejsan" -> 'j')
    3) Om strängen är kortare än tre tecken, skriv ut "Too short"
    4) Om strängen är minst tre tecken lång, skriv ut det tredje tecknet
*/

#include <stdio.h>
#include <string.h>

int main(){

    // Skriv din kod här i main

    char string[20];
    scanf("%s", string);

    if (strlen(string) < 3) {
        printf("Too short");
    }
    else {
        printf("%c", string[2]);
    } 

    return 0;
}