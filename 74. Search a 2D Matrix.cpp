class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int low = 0;
        int high = c-1;
        while(low<r && high>=0){
            if(target==matrix[low][high]){
                return true;
            }
            if(target<matrix[low][high]){
                high--;
            }
            else{
                low++;
            }
        }
        return false;
    }
};
