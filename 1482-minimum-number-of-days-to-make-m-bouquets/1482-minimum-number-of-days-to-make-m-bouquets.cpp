class Solution {
private:
    bool isOk(vector<int>& bloomDay, int m, int k, int day){
        int count = 0; 
        int made = 0;
        for(int bloom:bloomDay){
            if(bloom<=day){
                count++;
                if(count==k){
                    made+=1;
                    count=0;
                }
            }else{
                count =0;
            }
        }
        return made>=m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalFlowers = 1LL*m*k;
        if(totalFlowers > bloomDay.size()) return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        int left = low;
        int right = high;
        int result=-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(isOk(bloomDay,m,k,mid)){
                result = mid;
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return result;
    }
};