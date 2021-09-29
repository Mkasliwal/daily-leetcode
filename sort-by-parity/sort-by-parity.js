var sortArrayByParity = function(nums) {
    let start = 0;
    let end = nums.length - 1;
    
    if(nums.length >= 0 && nums.length <= 5000) {
        while(start < end) {
            if(nums[start] % 2 == 0) {
                start++;
            } else {
                if(nums[end] % 2 == 0) {
                    let temp = nums[start];
                    nums[start] = nums[end];
                    nums[end] = temp;
                }
                end--;
            }
        }
        return nums;
    }
    return [0];
};
