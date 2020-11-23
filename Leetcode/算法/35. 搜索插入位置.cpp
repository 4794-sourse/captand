int searchInsert(int* nums, int numsSize, int target){
    int head = 0, tail = numsSize, mid;
    while (head < tail) {
        mid = (head + tail) >> 1;
        if (nums[mid] >= target) {
            tail = mid;
        } else if (nums[mid] < target){
            head = mid + 1;
        }
    }
    return head;
}
