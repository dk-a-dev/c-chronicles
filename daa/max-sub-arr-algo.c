#include <stdio.h>
#include <limits.h>

typedef struct
{
    int left;
    int right;
    int sum;
} MaxSubarray;

MaxSubarray maxCrossingSum(int arr[], int l, int m, int h)
{
    int sum = 0;
    int left_sum = INT_MIN;
    int max_left = m;
    for (int i = m; i >= l; i--)
    {
        sum += arr[i];
        if (sum > left_sum)
        {
            left_sum = sum;
            max_left = i;
        }
    }

    sum = 0;
    int right_sum = INT_MIN;
    int max_right = m;
    for (int i = m + 1; i <= h; i++)
    {
        sum += arr[i];
        if (sum > right_sum)
        {
            right_sum = sum;
            max_right = i;
        }
    }

    MaxSubarray result = {max_left, max_right, left_sum + right_sum};
    return result;
}

MaxSubarray maxSubArraySum(int arr[], int l, int h)
{
    if (l == h)
    {
        MaxSubarray result = {l, h, arr[l]};
        return result;
    }

    int m = (l + h) / 2;

    MaxSubarray left = maxSubArraySum(arr, l, m);
    MaxSubarray right = maxSubArraySum(arr, m + 1, h);
    MaxSubarray cross = maxCrossingSum(arr, l, m, h);

    if (left.sum >= right.sum && left.sum >= cross.sum)
        return left;
    else if (right.sum >= left.sum && right.sum >= cross.sum)
        return right;
    else
        return cross;
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    MaxSubarray result = maxSubArraySum(arr, 0, n - 1);
    printf("Maximum contiguous sum is %d\n", result.sum);
    printf("Subarray is: ");
    for (int i = result.left; i <= result.right; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int arr2[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
    n = sizeof(arr2) / sizeof(arr2[0]);
    result = maxSubArraySum(arr2, 0, n - 1);
    printf("Maximum contiguous sum is %d\n", result.sum);
    printf("Subarray is: ");
    for (int i = result.left; i <= result.right; i++)
    {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}