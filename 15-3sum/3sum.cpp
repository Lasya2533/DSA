class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        sort(n.begin(),n.end());
       vector<vector<int>> ans;
       for(int i=0;i<n.size()-2;i++){
        int j=i+1;
        int k=n.size()-1;
        if(i>0 && n[i]==n[i-1]){continue;}
       while(j<k){
        int s=0;
        s=n[i]+n[j]+n[k];
        if(s==0){
            ans.push_back({n[i],n[j],n[k]});
            j++;
            k--;
            while(j<k && n[j]==n[j-1]){
                j++;
            }
            while(j<k && n[k]==n[k+1]){
                k--;
            }
        }else if(s<0){
            j++;
        }else{
            k--;
        }
       } }
       return ans;
    }
};