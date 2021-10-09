/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
    let sMap = new Map();
    
    if(ransomNote.length > magazine.length) {
        return false;
    }
    
    for(let i=0; i<ransomNote.length; i++) {
        sMap.set(ransomNote.charAt(i), sMap.has(ransomNote.charAt(i)) ? sMap.get(ransomNote.charAt(i)) + 1 : 1 );
    }
    
    for(let i=0; i<magazine.length; i++) {
        if(sMap.has(magazine.charAt(i)) && sMap.get(magazine.charAt(i)) > 0) {
            sMap.set(magazine.charAt(i), sMap.get(magazine.charAt(i)) - 1);
        }
    }
    
    for(let value of sMap.values()) {
        if(value > 0) {
           return false; 
        }
    }
    return true;
};

