#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int num, *arr, i,j=0;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = num-1; i>=0; i--)
        printf("%d ", arr[i]);
    return 0;
}

