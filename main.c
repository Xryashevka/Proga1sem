#include <stdio.h>
double Rad(double r){
    r= r*180/3.14;
    while (r>360){
        r = r-360;
    }
    return r*3.14/180;
}

double sin(double x)
{
    x = Rad(x);
    double res=0, pow=x, fact=1;
    for(int i=0; i<20; ++i)
    {
        res+=pow/fact;
        pow*=-1*x*x;
        fact*=(2*(i+1))*(2*(i+1)+1);
    }

    return res;
}



double cos(double x){
    return sin(x+3.14/2);
}

double tg(double x){
    return sin(x)/cos(x);
}


int main() {
    float z1,z2,x;
    float Pi = 3.14;
    scanf("%f",&x);
    z1 = (sin(4*x)/(1 + cos(4*x))) * (cos(2*x)/(1 + cos(2*x)));
    z2 = ((1/tg(x))*(3/2*Pi-x));
    printf("%f\n",z1);
    printf("%f\n",z2);

    return 0;
}
