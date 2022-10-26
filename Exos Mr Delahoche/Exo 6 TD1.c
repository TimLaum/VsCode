#include <stdio.h>

float calculatrice(int a,char* op,int b){
    float resultat;
    if (op == "+"){
        resultat = a + b;
    }
    else{
        if(op == "-"){
            resultat = a - b;
        }
        else{
            if(op == "/"){
                resultat = a / b;
            }
            else{
                resultat = a * b;
            }
        }
    }
    return resultat;
}



int main()
{
    printf("%.1f",calculatrice(2,"*",3));
}