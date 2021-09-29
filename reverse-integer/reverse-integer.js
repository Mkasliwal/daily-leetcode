const reverse = function(x) {
    let reverse = 0;
    let num = Math.abs(x);
    while(num) {
        reverse = reverse*10 + (num % 10);
        num = Math.floor(num/10);
    }
    return reverse > 0x7FFFFFFF ? 0 : (x < 0) ? -reverse : reverse;
};
