class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumTotal = 0;
        int sumLeft = 0;
        
        for(int i=0; i<nums.size(); i++) {
            sumTotal = sumTotal + nums[i];
        }
        
        for(int i=0; i<nums.size(); i++) {
            int sumRight = sumTotal - sumLeft - nums[i];
            if(sumRight == sumLeft) {
                return i;
            }
            sumLeft += nums[i];
        }
        return -1;

    }
};

