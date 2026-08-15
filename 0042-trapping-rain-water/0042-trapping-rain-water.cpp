class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(n);
        vector<int> right(n);
        int l = 0;
        int r = 0;
        for(int i = 0; i< n ; i++){
            left[i] = l;
            l = max(l, height[i]);
        }
        for(int i = n-1; i>=0 ; i--){
            right[i] = r;
            r = max(r, height[i]);
        }
        int ans = 0;
        for(int i = 0; i< n; i++){
            if(min(left[i],right[i])-height[i]>0){
                ans += min(left[i],right[i]) - height[i];
            }
        }
        return ans;
    }
};