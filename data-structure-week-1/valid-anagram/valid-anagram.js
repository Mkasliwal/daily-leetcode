/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    
    if(s.length !== t.length) {
        return false;
    }
    let sMap = new Map();
    
    for(let i=0; i<s.length; i++) {
        sMap.set(s.charAt(i), sMap.has(s.charAt(i)) ? sMap.get(s.charAt(i)) + 1 : 1 );
    }
    
    for(let i=0; i<t.length; i++) {
        if(sMap.has(t.charAt(i))) {
            sMap.set(t.charAt(i), sMap.get(t.charAt(i)) - 1);
            if(sMap.get(t.charAt(i)) < 0) {
                return false;
            }
        } else {
            return false;
        }
    }
    
    return true;    
};

