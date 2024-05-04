int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
		// Create hash table structure
    struct hashTable
    {
        int key;
        int value;
        UT_hash_handle hh; // makes this structure hashable 
    } *hashTable = NULL, *item; // important! initialize to NULL

    for (int i = 0; i < numsSize; i++)
    {
        int complement = target - nums[i];
        
        HASH_FIND_INT(hashTable, &complement, item); // 去找key對應的int
        
        if (item)
        {
            int* result = malloc(sizeof(int) * 2);
            result[0] = item->value;
            result[1] = i;
            *returnSize = 2;
            HASH_CLEAR(hh, hashTable);  // Free the hash table
            return result;
        }
        
        item = malloc(sizeof(struct hashTable));
        item->key = nums[i];
        item->value = i;
        HASH_ADD_INT(hashTable, key, item);
    }
    
    *returnSize = 0;
    HASH_CLEAR(hh, hashTable);  // Free the hash table
    return NULL;
}
