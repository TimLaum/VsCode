#include <stdio.h>


int swap(int x,int y,int* swapx,int* swapy){
    *swapx = y;
    *swapy = x;
}

int main()
{
    int x,y,swapx,swapy;
    printf("Donnez deux nombre : ");
    scanf("%d %d",&x,&y);
    swap(x,y,&swapx,&swapy);
    printf("%d %d",swapx,swapy);

}