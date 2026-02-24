let mirai_marks= [34, 23, 12, 45, 56, 78, 90];
let hitech_marks = [23, 45, 67, 89, 90, 12, 34];

let ans = [...mirai_marks, ...hitech_marks];
console.log(ans);
let all_marks = [...mirai_marks, 100, ...hitech_marks];
console.log(all_marks);

function display(...arr) {
    console.log(arr);
}

display(1, 2, 3, 4, 5);