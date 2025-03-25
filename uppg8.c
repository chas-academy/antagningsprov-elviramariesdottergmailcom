/* 
    Uppg8:
    1) Läs in en sträng (inga mellanslag, ej åäö eller specialtecken)
    2) Strängen kan innehålla stora och små bokstäver (ta hänsyn till det)
    3) Strängen är inte längre än 20 tecken
    4) Räkna hur många vokaler (a, e, i, o, u, y) strängen innehåller
    5) Skriv ut totala antalet vokaler
    Du får lägga till funktioner i koden utöver det som skrivs i main
*/

#include <stdio.h>
#include <string.h>

int vowel_checker (char string[], int index) {

    if (string[index] == 'a' || string[index] == 'A' || string[index] == 'e'|| string[index] == 'E'
        || string[index] == 'i'|| string[index] == 'I'|| string[index] == 'o'|| string[index] == 'O'
        || string[index] == 'u'|| string[index] == 'U'|| string[index] == 'y'|| string[index] == 'Y') {
        return 1;
    } 
 
    return 0;
}


int main(){
   // Skriv din kod här

    char string[20]; // array to store the string
    int vowel_counter = 0; // counter to store the amount of vowels counted.

    scanf("%s", string); // let the user enter a string

    // loop through the strings letters. If the current letter being looped through is a vowel, increase the countetr by 1.
    for (int i = 0; i < strlen(string); i++) {
        if (vowel_checker(string, i) == 1) {
            vowel_counter++;
        }
    }

    printf("%d", vowel_counter);

   return 0;
}
