class Solution {
public:
    void merge(vector<int>& nums, int start, int end){
        int mid = start + (end - start) / 2;

        int l1 = mid - start + 1;
        int l2 = end - mid;

        int *arr1 = new int[l1];
        int *arr2 = new int[l2];

        for(int i = 0; i < l1; i++){
            arr1[i] = nums[start + i];
        }

        for(int j = 0; j < l2; j++){
            arr2[j] = nums[mid + 1 + j];
        }

        int i = 0, j = 0;
        int k = start;

        while(i < l1 && j < l2){
            if(arr1[i] <= arr2[j]){
                nums[k++] = arr1[i++];
            } else {
                nums[k++] = arr2[j++];
            }
        }

        while(i < l1){
            nums[k++] = arr1[i++];
        }

        while(j < l2){
            nums[k++] = arr2[j++];
        }

        delete [] arr1;
        delete [] arr2;
    }

    void mergeSort(vector<int>& nums, int start, int end){
        if(start >= end){
            return;
        }

        int mid = start + (end - start) / 2;

        mergeSort(nums, start, mid);
        mergeSort(nums, mid + 1, end);

        merge(nums, start, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n - 1);
        return nums;
    }
};