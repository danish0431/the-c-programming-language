#include<stdio.h>
/* print Farenhiet-Celcius table
    for fahr = 0, 20, ..., 300; floating-point version */
int main() {
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    printf("Celcius Farenhiet\n");
    while(fahr <= upper) {
        celcius = (5.0/9.0) * (fahr-32.0);
        printf("%6.1f \t %3.0f\n", celcius, fahr);
        fahr = fahr + step;
    }
}