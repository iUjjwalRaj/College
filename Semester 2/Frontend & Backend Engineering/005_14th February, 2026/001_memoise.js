let fact = (n) => {
    if (n<1) {
        return 1;
    }
    return n * fact(n-1);
}

let sum = (n) => {
    let ans = 0;
    for (let i = 1; i <= n; i++){
        ans +=  i;
    }
    return ans;
}
// console.log(ans);
// let ans1 = fact(10);

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


let x = memo(fact); //below is what stored in it:
//    function (n) {
        
//         if (cache[n]) {
//             return cache[n];           
//         }
//         else{
//             cache[n] = fn(n);          //calculate and store in cache then return
//             return cache[n];
//         }
//     }
let y = memo(sum);

let ans1 = x(5);
let res = x(5);
console.log(ans1);
console.log(res);

let sumRes = y(5);
console.log(sumRes);
