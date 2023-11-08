#include <stdio.h> // for printf() function
#include <stdlib.h> // for abs() function
#include <math.h> // math
int main(){
    double a = sqrt(9); //square root.
    double b = pow(2,4); // I wasnt paying attention what the fuck does this do. 2^4 maybe????
    int c = round(3.14); int d = ceil(3.14); int e = floor(3.14); //rounding functions
    double f = fabs(-100); /*floating point absolute value*/ int g = abs(-100); //Integer absolute value
    double h = log(3);
    double i = sin(45); double j = cos(45); double k = tan(45); //trig functions
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%f\n", f);
    printf("%d\n", g);
    printf("%f\n", h);
    printf("%f\n", i);
    printf("%f\n", j);
    printf("%f\n", k);
    return 0;
}