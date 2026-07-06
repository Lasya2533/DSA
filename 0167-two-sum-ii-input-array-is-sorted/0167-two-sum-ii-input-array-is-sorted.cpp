class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            int s=0;
            s=arr[i]+arr[j];
               if(s==target){
                return {i+1,j+1};
               }
               if(s>target){
                j--;
               }else{
                i++;
               }
        }
        return {};
    }
};