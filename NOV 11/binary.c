#include <stdio.h>
int isPresent(int n, int arr[], int target)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the no. of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the target:\n");
    scanf("%d", &target);
    if (isPresent(n, arr, target))
    {
        printf("The target is present in \"%d\" position of the given array.\n", isPresent(n, arr, target));
    }
}