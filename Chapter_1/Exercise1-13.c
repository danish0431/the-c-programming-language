#include<stdio.h>
#define MAXWORD 20
/* After entering a sentence, input CTRL + D for EOF and then histrogram will be printed */
int main(){
    char c;
    int words[MAXWORD+1] = {0};
    int i, length_count = 0;
    while((c = getchar()) != EOF){
        if((c == ' ') || (c == '\t') || (c == '\n')){
            if(length_count > 0){
                if(length_count <= MAXWORD){
                    words[length_count]++;
                    length_count = 0;
                }
            }
        }
        else{
            length_count++;
        }
    }

    for(i = 0; i < MAXWORD; i++){
        if(words[i] > 0){
            printf("%2d : ", i);
            for(int j=0; j < words[i]; j++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}