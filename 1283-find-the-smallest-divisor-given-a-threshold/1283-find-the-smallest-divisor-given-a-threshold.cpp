class Solution {
    bool solve(vector<int>& nums, int threshold, int n){
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%n==0) threshold -= nums[i]/n;
            else threshold -= 1+ nums[i]/n;
        }
        return (threshold>=0) ? 1 : 0;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1, h=*max_element(nums.begin(), nums.end());
        while(l<h){
            int m = l+(h-l)/2;
            if(solve(nums, threshold, m)) h=m;
            else l=m+1;
        }
        return h;
    }
};