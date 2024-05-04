/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* returnArray = malloc(2*sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j < numsSize; j++)
        {
            if ( ((nums[i] + nums[j]) == target) && i != j )
            {
                returnArray[0] = i;
                returnArray[1] = j;

                return returnArray;
            }
        }
    }
    return -1;
}
