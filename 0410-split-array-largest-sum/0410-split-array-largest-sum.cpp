class Solution {
    int part(vector<int>& nums, int mid){
        int partition = 1;
        int maxSum =0;
        for(int i : nums){
            if(maxSum+ i <= mid){
                maxSum+=i;
            }else{
                partition++;
                maxSum = i;
            }
        }
        return partition;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low<=high){
            int mid = low+(high-low)/2;
            int count = part(nums,mid);
            if( count > k)
                low = mid+1;
            else{
                high = mid-1;
            }
        }
        return low;
    }
};