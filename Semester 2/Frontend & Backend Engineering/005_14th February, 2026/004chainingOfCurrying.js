let add = (num)=>{
    if(!num){
        return 0;
    }
    else{
        return function helper(v){
            // base case
            if(!v){
                return num;
            }
            else{
                num += v;
                return helper;
            }
        }
    }
}

console.log(add(1)(2)(3)(4)(5)());
// console.log(add());

