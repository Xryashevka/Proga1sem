#include <stdio.h>
#include <math.h>

int main() {
    float z1,z2,x;
    float Pi = 3.14;
    scanf("%f",&x);
    z1 = (sin(4*x)/(1 + cos(4*x))) * (cos(2*x)/(1 + cos(2*x)));
    z2 = (1/tan(3/2*Pi-x));
    printf("%f\n",z1);
    printf("%f\n",z2);

    return 0;
}
