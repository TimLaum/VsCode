#include <stdio.h>


float mult4(float val){
    return val*4;
}

int main(){
    float nb;
    printf("Donnez un nombre : ");
    scanf("%f",&nb);
    printf("%.1f",mult4(8))   ;
}
