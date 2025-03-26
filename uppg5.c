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

    // declaring an integer variable
    int num;

    // saves the user input in the variable
    scanf("%d", &num);

    /* a for loop that iterates 10 times. Normally started with index 0,
    but since the first multiplication will be num * 1, i will start at 1 instead.
    
    prints out the multiplication table of num */
    for (int i = 1; i < 11; i++) {
        printf("%d\n", num * i);
    }

    return 0;
}