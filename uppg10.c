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

    // creates a string and lets the user make an input
    char string[20];
    scanf("%s", string);
    char temp;

    for (int i = 0; i < strlen(string) - 1; i++) {
        for (int j = 0; j < strlen(string) - i - 1; j++) {
            if (string[j] > string[j+1]) {
                temp = string[j];
                string[j] = string[j+1];
                string[j+1] = temp;
            }
        }
    }
   
    for (int i = 0; i < strlen(string); i++)
    {
        printf("%c", string[i]);
    }

   return 0;
}
