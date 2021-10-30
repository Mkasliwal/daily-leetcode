class Solution {
public:
    int removeDuplicates(vector<int>& nums) {      
        int ptr = 0;
        if(nums.size() == 0) {
            return ptr;
        }
        for(int i=1; i<nums.size(); i++) {
            if(nums[ptr] != nums[i]) {
                nums[++ptr] = nums[i];
            }
        }
        return ptr + 1;
    }
};

