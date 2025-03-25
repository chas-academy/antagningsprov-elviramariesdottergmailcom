/* 
    Uppg6:
    1) Läs in fem heltal från tangentbordet
    2) Hitta det NÄST största av de fem talen (förutsätt att de är unika). 
    3) Skriv ut talet (bara siffror, ingen övrig text).
    OBS: Du får inte använda math.h i den här uppgiften.
*/

#include <stdio.h>


int main(){

    // Skriv din kod här i main

    int nums[5]; // array to save the 5 integers in
    int temp; // int for the bubble sort, a temporary saving spot.


    // loop to let user input 5 integers in the array
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    // bubble sort, but with decreasing order instead of increasing
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (nums[j] < nums[j+1]) {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    printf("%d", nums[1]); // print the next to largest number


    return 0;
}