#include<stdio.h>

int main(){

    int i;
    int food[5] = {1,2,3,4,5};
    
    printf("\nThis is the 1st part of the code:\nAn array: food[5] = {1,2,3,4,5}\n\n");
    printf("Element\t Address\t Value\n");

    for (i=0; i < 5; i++){
        printf("food[%d]\t %p\t %d\n", i, &food[i], food[i]);
    }

    printf("\nThe address(p) of food is: %p\nwhich is the same as the adress of food[0]\n\n", food);

    int * pFood = food;
    printf("Made a pointer called pFood: int* pFood = food:\n");
    printf("pFood\t Value %d\n", *pFood);
    printf("pFood+2:\n");
    printf("pFood+2\t Value %d\n\n", *pFood+2); //pick the 3rd element because it's already dereferenced (line 15)
    printf("This is because *pFood is a pointer to food, so adding +2 it still remains a pointer of food, just pointing to food[2] instead of food[0]\n\n");

//---------------------------

    int nadav = 30;
    int * p_nadav = & nadav; // This is a pointer to the veriable nadav

    printf("\nName \t Value \t Address \n\n");
   
    printf("%s \t %d \t %p \n", "nadav", nadav, &nadav);
    printf("%s \t %d \t %p \n", "p_nadav", *p_nadav, &p_nadav);
    printf("%s \t %p \t %p \n", "p_nadav", p_nadav, &p_nadav);
 
    *p_nadav += 1;
    *p_nadav = 40;
    printf("\n\nnadav + 1 is %d\n\n", nadav);
    printf("%d\n", *p_nadav);
    
    
    return 0;
}


