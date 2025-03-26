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

/* a function that will return an int. 
Takes two parameters: a string and an int.
Checks that the current element in the string/array with a conditional:
if the current char is a vowel (big or small), return 1. Otherwise, return 0.*/
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

    /* loop through the strings letters. Check every letter in the vowel checker function.
    our string and the current index are the arguments of the function.
    If the function returns a 1, add a count to the vowel counter variable. 
    If it returns anything but a 1, end the iteration and go to the next index.  */
    for (int i = 0; i < strlen(string); i++) {
        if (vowel_checker(string, i) == 1) {
            vowel_counter++;
        }
    }

    // Print the amount of vowels counted in the string.
    printf("%d", vowel_counter);

   return 0;
}
