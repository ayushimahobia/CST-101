class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 0; int h =0; int ans=INT_MAX;
        for(int i=0;i<weights.size();i++){
            l =max(l,weights[i]);
            h += weights[i];
        }
        while(l<=h){
            int mid = l+(h-l)/2;
            int sum =0; int d =1;
            for(int i=0;i<weights.size();i++){
                if(sum+weights[i]<=mid){
                    sum += weights[i];
                }
                else{
                    sum = weights[i];
                    d++;
                }
            }
            if(d<=days){
                ans =min(ans,mid);
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};
