class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        int eq = 0;
        int idx = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i]<pivot){
                ans.push_back(nums[i]);
                idx++;
            }else if(nums[i]==pivot) eq++;
        }
        for(int i = 1; i<=eq; i++){
            ans.push_back(pivot);
        }
        for(int i = 0; i< nums.size(); i++){
            if(nums[i]>pivot){
                ans.push_back(nums[i]);
            }
        }
        return ans;

    }
};