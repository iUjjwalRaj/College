function createCart() {
  let cartItems = []; // private data

  return {
    addItem(itemName) {
      cartItems.push(itemName);
    },

    removeItem(itemName) {
      cartItems = cartItems.filter(item => item !== itemName);
    },

    getCartItems() {
      return [...cartItems]; // return copy, not original
    },

    clearCart() {
      cartItems = [];
    }
  };
}

const user1Cart = createCart();
const user2Cart = createCart();

user1Cart.addItem("Apple");
user1Cart.addItem("Banana");

user2Cart.addItem("Laptop");

console.log(user1Cart.getCartItems()); // ["Apple", "Banana"]
console.log(user2Cart.getCartItems()); // ["Laptop"]

user1Cart.removeItem("Apple");
console.log(user1Cart.getCartItems()); // ["Banana"]

user2Cart.clearCart();
console.log(user2Cart.getCartItems()); // []
