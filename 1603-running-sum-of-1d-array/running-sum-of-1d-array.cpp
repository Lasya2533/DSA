class Solution {
public:
    vector<int> runningSum(vector<int>& n) {
        int sum=0;
        for(int i=1;i<n.size();i++){
            sum=n[i]+n[i-1];
            n[i]=sum;
        }
        return n;
    }
};