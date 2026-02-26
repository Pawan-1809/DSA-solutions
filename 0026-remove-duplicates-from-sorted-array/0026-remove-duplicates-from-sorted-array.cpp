class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> uq;
        int idx=0;
        for(auto num : nums){
            if(uq.find(num)==uq.end()){
                uq.insert(num);
                nums[idx++] = num;
            }
        }
        return idx;
    }
};