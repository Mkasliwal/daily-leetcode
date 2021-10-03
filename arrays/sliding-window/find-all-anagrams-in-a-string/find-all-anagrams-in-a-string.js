avar findAnagrams = function(s, p) {
    const subStrMap = new Map();
    const mainStrMap = new Map();
    
    let start = 0;
    let end = p.length - 1;
    const index = [];

    if(s.length < p.length) {
        return index;
    } 

    for (let i = 0; i < p.length; i++) {
        subStrMap.set(p[i], subStrMap.has(p[i]) ? subStrMap.get(p[i]) + 1 : 1);
        mainStrMap.set(s[i], mainStrMap.has(s[i]) ? mainStrMap.get(s[i]) + 1 : 1);
    }

    const compareFrequencyMap = (main, sub) => {
        for(const [key, ] of sub) {
            if(!main.has(key) || sub.get(key) !== main.get(key)) {
                return false;
            }
        }
        return true;
    }

    while(end < s.length) {
        if(compareFrequencyMap(mainStrMap, subStrMap)) {
            index.push(start);
        }

        if(mainStrMap.get(s[start]) > 1) {
            mainStrMap.set(s[start], mainStrMap.get(s[start]) - 1);
        } else {
            mainStrMap.delete(s[start]);
        }

        ++start;
        ++end;

        mainStrMap.set(s[end], mainStrMap.has(s[end]) ? mainStrMap.get(s[end]) + 1 : 1);
    }
    return index;    
};

