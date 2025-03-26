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

/* an integer function that takes a string as parameter.
Creates an integer variable named num, initializes it to 0.
Loops through the array used as argument: 
    for every iteration,
    - take the current char, subtract 48 (which will take it from the ASCII value of the literal version of the number
      to the numeric value of it, i.e. from "1" to 1.)
    - multiply the current value of num by 10
    - lastly add the numeric value of the index to num.
    
Once looped through, return num.*/
int string_to_int (char array[]) {

    int num = 0; 
  
    for (int i = 0; i < 3; i++)  {

        num = num * 10 + (array[i] - 48); 
    }

    return num;
}


int main(){

    // declares two strings that can hold a maximum of three characters
    char string1[3];
    char string2[3];

    /*  declares three integer variables. Two (num1 and num2) for storing the int equivalent of the strings, 
    and one (sum) to store the sum of the two other variables*/
    int num1 = 0;
    int num2 = 0;
    int sum = 0;

    // stores the input of the user for the two strings
    scanf("%s", string1);
    scanf("%s", string2);

    // uses the strings as arguments for the string to int function and saves the results in the integer variables. 
    num1 = string_to_int(string1);
    num2 = string_to_int(string2);

    // adds the sum of the two num variables in the sum variable
    sum = num1 + num2;

    // prints out the integer variable "sum"
    printf("%d", sum);

    return 0;
}
