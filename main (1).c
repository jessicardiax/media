#include <stdio.h>
#include <locale.h>

void media (float n1, float n2, float n3){
    float m;
    m= (n1+n2+n3)/3;
    printf ("media %.1f", m);
}
int main (){
    setlocale(LC_ALL, "portuguese");
    float a, b,c;
    printf("digite três notas:\n");
    scanf("%f%f%f", &a,&b,&c);
    media (a, b, c);
    return (0);
}