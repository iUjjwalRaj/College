function fact(n) {
    ans = 1;
    for (let i = 2; i <= n; i++) {
        ans = ans * i;
    }
    return ans;
    
}

console.log(fact(5)); // Output: 120
console.log(fact(5)); // Output: 120
console.log(fact(0)); // Output: 1
console.log(fact(1)); // Output: 1
console.log(fact(6)); // Output: 720
console.log(fact(10)); // Output: 3628800

// line break for clarity
console.log('---');

// Memoized version
function memoizedFact() {
    const cache = {};
    return function fact(n) {
        if (n in cache) {
            return cache[n];
        }
        let ans = 1;
        for (let i = 2; i <= n; i++) {
            ans = ans * i;
        }
        cache[n] = ans;
        return ans;
    };
}

const factMemo = memoizedFact();

console.log(factMemo(5)); // Output: 120
console.log(factMemo(5)); // Output: 120 (from cache)
console.log(factMemo(0)); // Output: 1
console.log(factMemo(1)); // Output: 1
console.log(factMemo(6)); // Output: 720
console.log(factMemo(10)); // Output: 3628800