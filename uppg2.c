/* 
    Uppg2:
    1) Läs in tre heltal från tangentbordet
    2) ta fram det största av dem
    3) Skriv ut det största av dem (bara siffror, ingen övrig text)
*/

#include <stdio.h>

int main(){

    // Skriv din kod här i main

    int num1;
    int num2;
    int num3;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) 
    {
        printf("%d", num1);
    } 
    else if (num2 > num1 && num2 > num3) 
    {
        printf("%d", num2);
    }
    else if (num3 > num1 && num3 > num2) 
    {
        printf("%d", num3);
    }

    return 0;
}