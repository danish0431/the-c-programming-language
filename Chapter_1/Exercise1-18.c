#include<stdio.h>
#define MAXLINE 1000
int main(){
    int index = 0;
    char c;
    char line[MAXLINE];
    while((c = getchar()) != EOF){
        if((c != '\n') && (c != '\t') && (c != ' ')){
            line[index++] = c;
        }
    }
    printf("%s \n", line);
    return 0;
}