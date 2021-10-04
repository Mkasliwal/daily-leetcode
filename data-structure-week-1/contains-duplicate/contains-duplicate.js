/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let numFrequency = new Map();
    
    for(let i=0; i<nums.length; i++) {
        numFrequency.set(nums[i], numFrequency.has(nums[i]) ? numFrequency.get(nums[i]) + 1 : 1);
    }
    
    let findDuplicate = false;
    
    for(const [key,value] of numFrequency) {
        if(value >= 2) {
            return true;
        };
    }
    return findDuplicate;
};

