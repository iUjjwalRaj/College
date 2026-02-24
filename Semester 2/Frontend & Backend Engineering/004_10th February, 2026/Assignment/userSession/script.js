function createUserSession(userName) {
  let loggedIn = false;

  return {
    login() {
      loggedIn = true;
    },

    logout() {
      loggedIn = false;
    },

    isLoggedIn() {
      return loggedIn;
    },

    getUser() {
      return loggedIn ? userName : null;
    }
  };
}

const userA = createUserSession("Aether");
const userB = createUserSession("Lumine");

userA.login();
console.log(userA.isLoggedIn()); // true
console.log(userA.getUser());    // "Aether"

console.log(userB.isLoggedIn()); // false
console.log(userB.getUser());    // null

userA.logout();
console.log(userA.isLoggedIn()); // false
