/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function(nums1, nums2) {
    let map1 = new Map();
    let map2 = new Map();
    
    let createMap = (list,map) => {
        for(let i=0; i<list.length; i++) {
            map.set(list[i],0); 
        }
        for(let i=0; i<list.length; i++) {
            map.has(list[i]) ? map.set(list[i], map.get(list[i])+1) : 1; 
        }
        return map;
    }
    
    let freqMap1 = createMap(nums1,map1);
    let freqMap2 = createMap(nums2,map2);
    let intersection = [];
    
    for(let [key,value] of freqMap1) {
        if(freqMap2.has(key)) {
            let min = Math.min(value,freqMap2.get(key))
            while(min > 0) {
                intersection.push(key);
                --min;
            }
        }
    }
    return intersection;
};

