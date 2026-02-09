let student1 = {
    fname: "Aether",
    age: 5000,
    origin: "Unknown",
    eductaion: "Akedimiya School of Sumeru",
    "last fname": "Lumine",
    " ": "Space key",
    ".": "dot key"
}

console.log(student1);
console.log(student1.age);
console.log(student1["last fname"]);
console.log(student1[" "]);
console.log(student1["."]);
console.log(student1["age"]);

student1.fname = "Raiden Shogun";
console.log(student1);


student1.school = "Court of Fontaine";
console.log(student1);

