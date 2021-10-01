const twoSum = function(nums, target) {
    const newSet = new Map();
    for(let i=0; i<nums.length; i++) {
        newSet.set(nums[i],i);
    }
    
    const indexes = [];
    for(let i=0; i<nums.length; i++) {
        const findKey = target - nums[i];
        if(newSet.get(findKey) != i && newSet.has(findKey)) {
            indexes.push(i);
            indexes.push(newSet.get(findKey));
            break;
        }
    }
    return indexes;
};
