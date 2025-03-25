/* 
    Uppg3:
    1) Läs in en sträng från tangentbordet (max 20 tecken)
    2) ta fram hur många tecken strängen innehåller (bortsett från '\0')
    3) Skriv ut antalet tecken (bara siffror, ingen övrig text)
*/

#include <stdio.h>
#include <string.h>

int main(){

    // Skriv din kod här i main

    char string[20];
    int string_length = strlen(string);
    
    printf("%d", string_length);

    return 0;
}