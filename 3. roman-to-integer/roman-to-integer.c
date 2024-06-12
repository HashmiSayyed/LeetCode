#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int romanToInt(char* s);
int findIndex (char arr[], int size, char c);

int main(void) {
    printf("%i\n", romanToInt("XIV"));
    return 0;
}

int romanToInt(char* s) {
    char romeArr[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int intArr[] = {1, 5, 10, 50, 100, 500, 1000};

    int sum = 0;
    int count = 0;
    int ind = 0;
    bool running = true;

    while (running) {
        if (count == strlen(s) - 1) {
            sum += intArr[findIndex(romeArr, 7, s[count])];
            running = false;
        } else if (intArr[findIndex(romeArr, 7, s[count])] < intArr[findIndex(romeArr, 7, s[count + 1])]) {
            sum += intArr[findIndex(romeArr, 7, s[count + 1])] - intArr[findIndex(romeArr, 7, s[count])];
            count++;
            if (count == strlen(s) - 1) {
                running = false;
            }
            count++;
        } else {
            sum += intArr[findIndex(romeArr, 7, s[count])];
            count++;
        }
    }

    return sum;
}

int findIndex (char arr[], int size, char c) {
    int index = 0;
    while (index < size && arr[index] != c) {
        index++;
    }
    return index;
}