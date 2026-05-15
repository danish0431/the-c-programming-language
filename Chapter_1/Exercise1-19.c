#include<stdio.h>
#define MAXLINE 100
int main(){
    int i, index = 0;
    char c; char line[MAXLINE];
    while((c = getchar()) != EOF){
        line[index++] = c;
    }
    for(i=index; i >=0; i--){
        printf("%c", line[i]);
    }
    printf("\n");
    return 0;
}