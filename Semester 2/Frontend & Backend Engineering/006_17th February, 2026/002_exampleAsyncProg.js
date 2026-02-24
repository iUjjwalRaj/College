console.log(`maggi laya`);

let t1 = new Date();
t1 = t1.getSeconds();

while (new Date().getSeconds() < t1 + 2) {
    console.log(`maggi banana start`);
    console.log(`wait 2 minutes`);
}

console.log(`maggi bann gayi! kha lo..`);
