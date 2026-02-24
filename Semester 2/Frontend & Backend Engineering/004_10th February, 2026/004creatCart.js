// we need to create cart function which do add item, remove item(from last), display item, using push, pop etc in form of string array.

function createCart() {
    let cart = [];

    let addItem = (item) => {
        cart.push(item);
    }

    let removeItem = () => {
        cart.pop();
    }

    let displayCart = () => {
        console.log(cart);
    }

    return {addItem, removeItem, displayCart}
}

let myCart = createCart();
myCart.addItem("Apple");
myCart.addItem("Banana");
myCart.addItem("Mango");
myCart.addItem("Orange")
myCart.displayCart();
myCart.removeItem();
myCart.displayCart();