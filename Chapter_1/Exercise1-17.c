#include<stdio.h>
#define MAXLINE 200
int get_line(char [], int);
int main(){
    char c[MAXLINE];
    int length = 0;
    while((length = get_line(c, MAXLINE)) > 0){
        if(length > 80){
            printf("%s \n", c);
        }
    }
    return 0;
}

int get_line(char s[], int p_maxline){
    int c, i;
    for (i=0; i < p_maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}