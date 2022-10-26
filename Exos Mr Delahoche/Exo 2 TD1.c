#include <stdio.h>
#include<math.h>
int main()
{
    float h,r,vol;
    printf("Donnez le rayon et la hauteur");
    scanf("%f",&r);
    scanf("%f",&h);
    vol = M_PI*(r*r)*h;
    printf("%.1f",h);
}
