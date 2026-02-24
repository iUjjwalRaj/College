let fibbonacci = (n) => {
    let a = 0;
    let b = 1;
    let ans = 0;
    for (let index = 0; index <= n; index++) {
        ans = a + b
        a = b;
        b = ans;
    }
}


function memo(fn){
    let cache = {};
    return function (n) {
        
        if (cache[n]) {
            return cache[n];           //direct result return from cache
        }
        else{
            cache[n] = fn(n);          //calculate and store in cache then return
            return cache[n];
        }
    }
}


let u = memo(fibbonacci);

let ans = u(5);
let res = u(5);

console.log(ans);
console.log(res);

