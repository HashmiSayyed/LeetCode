#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target);

int main(int argc, char *argv[])
{
    int input[] = {1, 2, 3, 6};
    int *ans = twoSum(&input[0], 4, 9);
    printf("First Index: %i\nSecond Index: %i\n", ans[0], ans[1]);
    free(ans);
    return 0;
}

int *twoSum(int *nums, int numsSize, int target)
{
    int *arr = malloc(2 * sizeof(int));
    if (arr == NULL)
    {
        exit(0);
    }
    else
    {
        for (int i = 0; i < numsSize; i++)
        {
            for (int j = 0; j < numsSize; j++)
            {
                if (i == j)
                {
                    continue;
                }
                else
                {
                    int mySum = nums[i] + nums[j];
                    if (mySum == target)
                    {
                        arr[0] = i;
                        arr[1] = j;
                        return arr;
                    }
                }
            }
        }
    }
    return arr;
}