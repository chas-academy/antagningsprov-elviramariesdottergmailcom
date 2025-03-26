/* 
    Uppg10:
    1) Läs in en sträng (bara små bokstäver a-z, max 20 tecken)
    2) Sortera bokstäverna i alfabetisk ordning
    3) Skriv ut den sorterade strängen
        
    Ex: 
    In: "banana"
    Ut: "aaabnn"
    Du får lägga till funktioner i koden utöver det som skrivs i main
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

   // Skriv din kod här

    // declares a string with a maximum of 20 characters.
    char string[20];

    // saves the input of the user in the string.
    scanf("%s", string);

    // declares a char variable to use within the bubble sort as a temporary save.
    char temp;

    // bubble sort algorithm, sorts the string based on ASCII values in an ascending order.
    for (int i = 0; i < strlen(string) - 1; i++) {
        for (int j = 0; j < strlen(string) - i - 1; j++) {
            if (string[j] > string[j+1]) {
                temp = string[j];
                string[j] = string[j+1];
                string[j+1] = temp;
            }
        }
    }
   
    // loops through the now sorted array/string, prints out the chars.
    for (int i = 0; i < strlen(string); i++)
    {
        printf("%c", string[i]);
    }

   return 0;
}
