#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    char A=*(char *)a;
    char B =*(char *)b;
    return (char)A - (char)B;
}

int findNextNumber(int num) {
    char strNum[20];
    sprintf(strNum, "%d", num);
    int len = strlen(strNum);

    int i, j;
    for (i = len - 1; i > 0; i--) {
        if (strNum[i] > strNum[i - 1]) {
            break;
        }
    }

    if (i == 0) {
        return -1;
    }

    int x = strNum[i - 1], smallest = i;
    for (j = i; j < len; j++)
        if (strNum[j] > x && strNum[j] < strNum[smallest])
            smallest = j;
    
    char temp = strNum[i-1];
    strNum[i-1] = strNum[smallest];
    strNum[smallest] = temp;
    
    qsort(strNum +i, len - i, sizeof(strNum[0]), compare);
    
    int nextNum = atoi(strNum);

    return nextNum;
}

int main() {
    int givenNum, nextNum;

    printf("Enter a number: ");
    scanf("%d", &givenNum);

    nextNum = findNextNumber(givenNum);

    if (nextNum != -1) {
        printf("The smallest number greater than %d with the same set of digits is: %d\n",givenNum, nextNum);
    }

return 0;
}

