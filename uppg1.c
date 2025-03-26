/* 
    Uppg1:
    1) Läs in två heltal från tangentbordet
    2) Summera heltalen
    3) Skriv ut resultatet (bara siffror, ingen övrig text)
*/

#include <stdio.h>

int main(){

    // Skriv din kod här i main

    // declaring two integer variables.
    int num1;
    int num2;


    // letting the user input be saved to num1 and num2
    scanf("%d", &num1);
    scanf("%d", &num2);


    // printing out the sum of the two integers
    printf("%d", num1 + num2);


    return 0;
}