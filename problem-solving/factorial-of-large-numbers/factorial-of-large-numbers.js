const factorial = (N) => {
    /**
     * more about BigInt
     * https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/BigInt
    */
    N = BigInt(N);
    let fact = 1n;
    if (N === 0n) {
        return String(1n);
    }
    while (N >= 1n) {
        fact = fact * N;
        N--;
    }
    return String(fact);
}