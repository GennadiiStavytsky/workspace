// #include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s );
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);
void mx_strdel(char **str);
char *mx_strcpy(char *dst, const char *src);


char *mx_concat_words(char **words){
    int len = 0;
    char *newstr = NULL;
    char *buff = NULL;
    char *newstrwrd = NULL;

    while (words[len]){
        newstrwrd = mx_strdup(words[len]);
        newstr = mx_strjoin(buff, newstrwrd);
        free(buff);
        if (!words[len + 1])
            buff = mx_strjoin(newstr, "\0");
        else
            buff = mx_strjoin(newstr, " ");
        free(newstr);
        free(newstrwrd);
        len++;
    }
    return buff;
    // return NULL; 
}

// int main(){
//     char *words[] = {"Free","Free","Free","Free","Free","Free","Free","Free","Free","Free","Free","Free", "your", "mind.", NULL};
//     char *res = mx_concat_words(words);
//     printf("%s", res);
//     system("leaks -q a.out");
// }

