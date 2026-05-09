#include<stdio.h>
int main(){
    char c;
    int newline = 0, tab = 0, blank = 0;
    while((c = getchar()) != EOF){
        if(c == '\n'){
            printf("Newlines: %d\n", ++newline);
        }
        else if(c == '\t'){
            printf("Tabs: %d\n", ++tab);
        }
        else if(c == ' '){
            printf("Blanks: %d\n", ++blank);
        }
    }
    return 0;
}