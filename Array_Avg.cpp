#include <stdio.h>

int main()
{
    int n, i;
    float sum=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    float average = sum / n;

    printf("Sum is %f\n", sum);
    printf("Average is %f\n", average);

    return 0;
}
