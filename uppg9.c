/* 
    Uppg9:
    Ibland när tal ska läsas in så får man dem som en sträng istället
    för som ett tal. 
    1) Läs in två strängar 
    2) Båda strängarna kommer att vara tre tecken långa och bara
    innehålla siffror, t ex: "123" och "456"
    3) Omvandla strängarna till heltal
    4) Addera talen
    5) Skriv ut resultatet
    Ex: 
    In: "123" "456"
    Ut: 579 (Bara detta tal skrivs ut)
    Du får lägga till funktioner i koden utöver det som skrivs i main
*/

#include <stdio.h>
#include <string.h>


int string_to_int (char array[]) {

    int num = 0; 
  
    for (int i = 0; i < 3; i++)  {

        num = num * 10 + (array[i] - 48); 
    }

    return num;
}


int main(){

    char string1[3];
    char string2[3];
    int num1 = 0;
    int num2 = 0;
    int sum = 0;

    scanf("%s", string1);
    scanf("%s", string2);

    num1 = string_to_int(string1);
    num2 = string_to_int(string2);

    sum = num1 + num2;

    printf("%d", sum);

    return 0;
}
