#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
int main(){

    double raio,area;
    scanf("%lf",&raio);
    area = (raio*raio) * PI;

    printf("A=%.4lf\n",area);


    return 0;
}
