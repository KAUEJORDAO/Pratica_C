#include <stdio.h>

float calcarearetang(float base, float altura){

    float area = base * altura;
    return area;
}
int main(){
    float x, y;

    scanf("%f", &x);
    scanf("%f", &y);
    float area = calcarearetang(x, y);

    printf("%.0f", area);
    return 0;
}