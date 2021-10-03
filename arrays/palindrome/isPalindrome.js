var isPalindrome = function(x) {
    const sign = x < 0;
    let reverse = 0;
    let num = x;
    if(!sign && x < 0x7FFFFFFF) {
        while(num) {
            reverse = reverse * 10 + (num % 10);
            num = Math.floor(num/10);
        }
        if(reverse == x) {
            return true
        }
        return false;
    }
    return false;  
};
