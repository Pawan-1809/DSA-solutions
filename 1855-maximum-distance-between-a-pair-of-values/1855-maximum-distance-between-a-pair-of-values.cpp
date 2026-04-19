class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i, j;

        for (i = 0, j = 0; i < nums1.size() && j < nums2.size(); j++)
            if(nums1[i] > nums2[j])
                i++;

        return max(0, j - i - 1);
    }
};