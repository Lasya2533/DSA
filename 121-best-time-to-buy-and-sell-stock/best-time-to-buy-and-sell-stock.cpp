class Solution {
public:
    int maxProfit(vector<int>& p) {
     int pr=0;
     int minp=p[0];
     for(int i=0;i<p.size();i++){
        if(p[i]<minp){
            minp=p[i];
        }else{
            pr=max(pr,p[i]-minp);
        }

     }
     return pr;  
    }  
};