/*
This program takes an array with the ages of 4 brothers.
If the age is smaller than 35, than turn it to 35. Than print.
*/

#include <stdio.h>

int main() {
  
    int age[] = {30, 36, 30, 42};
    
    int i;
    int j = 0;
    
//The ~for~ loop set the iteration conditions.
    for (i = 0; i < sizeof(age[i]); i++) {
        j += 1;
        if (age[i] < 35) {age[i] = 35;}
     
   
        printf("The age of brother no. %d is %d\n", j, age[i]);
    }
        
  return 0;
}
