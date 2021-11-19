/**
 * @param {number} n
 * @return {number}
 */

/**
* Runtime: 60 ms, faster than 98.70% of javascript++ online submissions for Unique Binary Search Trees.
* Memory Usage: 38.9 MB, less than 14.90% of javascript++ online submissions for Unique Binary Search Trees.
*/

var numTrees = function(n) {
    let arr = new Array(n+1).fill(0);

    arr[0] = 1
    arr[1] = 1;
    
    for(let i=2; i<n+1; i++) {
        for(let j=0; j<i; j++) {
            arr[i] += arr[j]*arr[i-j-1];
        }
    }
    
    return arr[n];
};

