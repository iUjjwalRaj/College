function bank() {
    let balance = 0;

    let deposite = (amount) => {
        balance += amount;
    }
    let withdraw = (amount) => {
        balance -= amount;
    }
    let getBalance = (amount) => {
        console.log(balance);
    }

    return {deposite, withdraw, getBalance}
}

let paimon = bank();
paimon.deposite(2000);
paimon.getBalance();

let Aether = bank();
Aether.deposite(4000);
Aether.withdraw(500);
Aether.getBalance();