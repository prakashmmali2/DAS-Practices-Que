#include <stdio.h>
#define MAX_SIZE 100
void printNextGreaterElement(int arr[], int size)
{
    int stack[MAX_SIZE];
    int nge[MAX_SIZE];
    int top = -1;
    for (int i = size - 1; i >= 0; i--) 
    {
        while (top != -1 && arr[stack[top]] <= arr[i])
            top--;
        if (top==-1)
            nge[i]=-1;
        else
            nge[i]=arr[stack[top]];
        stack[++top]=i;
    }
    for (int i = 0; i < size; i++) 
    {
        printf("%d -> %d\n", arr[i], nge[i]);
    }
}
int main() 
{
    int arr[] = {4, 5, 56, 80, 7, 30, 6, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printNextGreaterElement(arr, size);
    return 0;
}

