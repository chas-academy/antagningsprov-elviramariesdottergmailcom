/* 
    Uppg7:
    1) Skriv färdigt funktionen för BMI nedanför 
    2) BMI = vikt / (längd * längd) 
    3) Rör inte main() - funktionen, den är redan klar
    OBS: Du får inte använda math.h i den här uppgiften.
*/

#include <stdio.h>

float BMI(float weight, float height){

// Skriv din kod här

// performs the arithmetics of BMI, saves it in a float since the main function prints out BMI as a float value
float result = weight / (height * height);

// returns the result float
return result;
}




// ---- OBS! Du får INTE modifiera koden i main() ----
int main(){
    float weight = 0.0, height = 0.0;
    scanf("%f%f", &weight, &height);
    printf("%.2f", BMI(weight, height));
    return 0;
}
// ---------------------------------------------------