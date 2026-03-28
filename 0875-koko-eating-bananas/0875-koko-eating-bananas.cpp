#include<algorithm>
class Solution {
private:
    bool isEaten(vector<int>&piles, int h, int k){
        double temp=0;
        for(int i = 0; i< piles.size(); i++){
            if(piles[i]%k ==0) temp+=piles[i]/k;
            else  temp+=piles[i]/k+1;
        }
        if(temp<=h) return true;
        return false;
    }
    int maxi(vector<int>&piles){
        int m=0;
        for(int i = 0; i< piles.size(); i++){
            if(m<piles[i]) m = piles[i];
        }
        return m;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        double high = maxi(piles);
        int ans = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(isEaten(piles,h, mid)){
                ans = mid;
                high = mid-1;
            }else low = mid+1;
        }
        return ans;
    }
};