class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n =nums.size()-1;
        int low=0;int high=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if((mid ==nums.size()-1 || nums[mid]>nums[mid+1]) && (mid == 0 ||
            nums[mid]>nums[mid-1])){
                return mid;
            }
          else if( nums[mid+1]>nums[mid]){
              low = mid+1;
          }
          else{
              high = mid-1;
          }
        }
        return -1;
    }
};
