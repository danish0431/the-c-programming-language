#include<stdio.h>
int main(){
    char value;
    value = (getchar() != EOF);
    printf("getchar() != EOF: %d\n", value);
    return 0;
}