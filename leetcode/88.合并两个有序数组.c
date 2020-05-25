/*
 * @lc app=leetcode.cn id=88 lang=c
 *
 * [88] 合并两个有序数组
 */

// @lc code=start

int compareByInstance(const void* a,const void* b){
    return *(int*)a > *(int*)b;
}
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    for(int i=0;i<n;i++){
        nums1[m+i] = nums2[i];
    }

    qsort(nums1,nums1Size, sizeof(int), compareByInstance);
    return nums1;
}
// @lc code=end

