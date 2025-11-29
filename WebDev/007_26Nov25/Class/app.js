// function bankingSystem() {
//     // await login
//     //balance check
//     //balance print
//     //
//     //
//     //transfer money
//     //
    
// }


async function fetchData() {
    let response = await fetch('https://fakestoreapi.com/products');
    let data = await response.json();
    console.log(data);
    

}


fetchData();


async function dataFetching() {
    try {
        let response = await fetch('https://fakestoreapi.com/products');
        let data = await response.json();
        console.log(data);
    } catch (error) {
        console.log(error);
        console.log("Error fetching data:", error);
    }
}


dataFetching();


async function detData() {