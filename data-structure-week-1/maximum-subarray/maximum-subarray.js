/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let maxSum = -Number.MAX_SAFE_INTEGER;  // -9007199254740991
    let currentMax = 0;
    
    for(let i=0; i<nums.length; i++) {
        currentMax = currentMax + nums[i];
        if(maxSum < currentMax) {
            maxSum = currentMax;
        }
        if(currentMax < 0) {
            currentMax = 0;
        }
    }
    return maxSum;
};

