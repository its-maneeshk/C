#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int findNextNumber(int num)
{
    char numStr[20];
    sprintf(numStr, "%d", num);
    int n = strlen(numStr);
    int i;
    for (i = n - 2; i >= 0; i--)
    {
        if (numStr[i] < numStr[i + 1])
        {
            break;
        }
    }
    if (i == -1)
    {
        return -1;
    }
    int smallestGreaterIndex = i + 1;
    for (int j = i + 2; j < n; j++)
    {
        if (numStr[j] > numStr[i] && numStr[j] < numStr[smallestGreaterIndex])
        {
            smallestGreaterIndex = j;
        }
    }
    swap(&numStr[i], &numStr[smallestGreaterIndex]);
    for (int j = i + 1; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (numStr[j] > numStr[k])
            {
                swap(&numStr[j], &numStr[k]);
            }
        }
    }
    int nextNum;
    sscanf(numStr, "%d", &nextNum);
    return nextNum;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int nextNum = findNextNumber(num);
    if (nextNum == -1)
    {
        printf("No greater number with the same set of digits found.\n");
    }
    else
    {
        printf("The smallest number greater than %d with the same set of digits is: %d\n", num, nextNum);
    }
    return 0;
}