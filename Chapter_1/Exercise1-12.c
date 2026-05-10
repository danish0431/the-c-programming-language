#include<stdio.h>
int main(){
    char c;
    int in_blank = 0;
    while((c = getchar()) != EOF){
        if(c == ' '){
            if(!in_blank){
                printf("\n");
                in_blank = 1;
            }
        }
        else{
            putchar(c);
            in_blank = 0;
        }
    }
    return 0;
}