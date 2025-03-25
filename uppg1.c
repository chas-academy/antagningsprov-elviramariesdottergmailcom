/* 
    Uppg1:
    1) Läs in två heltal från tangentbordet
    2) Summera heltalen
    3) Skriv ut resultatet (bara siffror, ingen övrig text)
*/

#include <stdio.h>

int main(){

    // Skriv din kod här i main
    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("%d", num1 + num2);


    return 0;
}