class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        //Binary representation me koi bhi XOR max number se jyada nhi ho sakta kyunki last bit jo set (1) hai wahi sabse bada ho sakta h ex: 1111, isse bada kuchh bhi hoga to wo 5th pe 1 aana hoga aur agar 5th pe 1 aaya matlab wo max se jyada h which is not possible

        //Suppose max number 1111 hai to baaki 2 number isse chhota hi hoga (baaki bhi) aur teeno mil ke saare possible numbers bana sakte h kyunki sab aapas ke permutations hi hai, isliye har bit ya to 1 ho sakta h yaa 0 means if last set bit n tak h to total unique 2^n ho jaegi
        
        int n = nums.size();
        if(n<3){
            return n;
        }
        int bits = 0;
        while((1 << bits) <= n){
            bits++;
        }
        return (1 << bits);
    }
};