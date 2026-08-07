class Solution {
 int prod(int x){
    int p=1; 
    while(x){
        p*=x%10;
        x/=10;
    }
    return p;
}
public:
 int smallestNumber(int n,int t){
    while(prod(n)%t)
        ++n; 
    return n;
    }
};