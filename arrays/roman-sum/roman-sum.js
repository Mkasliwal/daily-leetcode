var romanToInt = function(s) {
    const romanNumerals = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    };

    const len = s.length;
    let sum = romanNumerals[s[len - 1]];
    
    for(let start = len-2; start >=0; start--) {
        if(romanNumerals[s.charAt(start)] < romanNumerals[s.charAt(start+1)]) {
            sum = sum - romanNumerals[s.charAt(start)];
        } else {
            sum = sum + (romanNumerals[s.charAt(start)]);
        }
    }
    return sum;
};
