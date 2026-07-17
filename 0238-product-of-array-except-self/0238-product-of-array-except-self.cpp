class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        bool flag = false;
        int zeroIdx = -1;
        int xerocnt = 0;
        int prod = 1;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]==0){
                flag = true;
                xerocnt++;
                zeroIdx = i;
            }else{
                prod*=nums[i];
            }
        }
        if(xerocnt>1){
            return ans;
        }
        if(flag){
            ans[zeroIdx]= prod;
            return ans;
        }

        for(int i = 0; i< n ; i++){
            if(nums[i]!=0)
                ans[i] = prod/nums[i];
        }
        return ans;
    }
};