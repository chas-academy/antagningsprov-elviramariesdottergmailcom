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


    // delcaring an array of chars / string that can hold a max 20 chars not counting \0
    char string[20];

    // saving the users input in the string
    scanf("%s", string);

    // using the strlen function from string.h to get an integer of how many elements are saved in the array/string
    int string_length = strlen(string);

    // print out the number of elements
    printf("%d", string_length);

    return 0;
}