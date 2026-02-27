class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size()- k%nums.size();
        vector<int> arr;
        for(int i = len ; i< nums.size() ;i++){
            arr.push_back(nums[i]);
        }
        for(int i = 0 ; i< len ; i++){
            arr.push_back(nums[i]);
        }
        nums = arr;
    }
};