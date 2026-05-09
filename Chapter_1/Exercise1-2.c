#include<stdio.h>
int main(){
    printf("hello, world\m \n");
    return 0;
}

/*
If you try to provide any escape sequence which is not listed compiler will compile the program with warning of unknown escape sequence e.g in case of \m
Exercise1-2.c:3:25: warning: unknown escape sequence '\m' [-Wunknown-escape-sequence]
    printf("hello. world\m \n");
                        ^~
1 warning generated.
apple@192 Chapter_1 % ./Exercise1-2.out                   

Output will be like:
hello, worldm 

*/