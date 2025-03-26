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


    // declaring a string with a maximum of 20 characters
    char string[20];

    // save the user input in the string
    scanf("%s", string);


    /* conditional. If the string length is shorter than 3 characters, print out "too short"
    if the string is at least 3 characters long, print out the third character */
    if (strlen(string) < 3) {
        printf("Too short");
    }
    else {
        printf("%c", string[2]);
    } 

    return 0;
}