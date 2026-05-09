#include<stdio.h>
/* print Celcius-Farenhiet table in reverse order from 300 degree to 0 */
int main() {
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    celcius = upper;
    printf("Celcius Farenhiet\n");
    while(celcius >= lower) {
        fahr = ((9.0/5.0) * celcius)+32.0;
        printf("%6.1f \t %3.0f\n", celcius, fahr);
        celcius = celcius - step;
    }
    return 0;
}