#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char buffer[50];

bool isPalindrome(int x);
char* numToStr(int num);
char* revStr(char* str);

int main(void) {
    printf("%s\n", isPalindrome(-121) ? "True" : "False");
    return 0;
}

bool isPalindrome(int x) {
    char str1[50];
    char str2[50];
    strcpy(str1, numToStr(x));
    strcpy(str2, revStr(numToStr(x)));

    if (strcmp(str1, str2) == 0) {
        return true;
    } else {
        return false;
    }
}

char* numToStr(int num) {
    sprintf(buffer, "%i", num);
    return buffer;
}

char* revStr(char* str) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i <= j; i++, j--) {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
    return str;
}