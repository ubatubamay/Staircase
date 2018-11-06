#include <stdio.h>

void staircase(int number) {
    int cont1, cont2, cont3;
    for(cont1=1; cont1<number+1; cont1++){
        for(cont2=1; cont2<=number-cont1; cont2++){
            printf(" ");
        }
        for(cont3=cont1; cont3>0; cont3--){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int number;
    scanf("%i",&number);
    staircase(number);
    return 0;
}
