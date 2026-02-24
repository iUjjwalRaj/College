let cart = ["redtape 402", "addidas 203", "puma 500", "nike 999", "reebok 300"];
let element = "puma 500";

let index = cart.indexOf(element);
console.log(index);

cart.splice(index, 1);
console.log(cart);

// clear cart

cart = [];
console.log(cart);
b