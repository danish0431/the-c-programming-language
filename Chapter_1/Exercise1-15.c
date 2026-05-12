#include <stdio.h>
/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int calculate_temperature(int, int, int);

int main(){
    int lower, upper, step;
    
    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    calculate_temperature(0,300,20);
    return 0;
}

int calculate_temperature(int p_lower, int p_upper, int p_step){
    int fahr, celsius;
    fahr = p_lower;
    while (fahr <= p_upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + p_step;
    }
    return 0;
}