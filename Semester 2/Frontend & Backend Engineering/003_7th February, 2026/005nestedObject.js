let student1 = {
    fname: "Aether",
    age: 5000,
    origin: "Unknown",
    eductaion: "Akedimiya School of Sumeru",
    "last fname": "Lumine",
    " ": "Space key",
    ".": "dot key",
    address: {
        temp: {
            Area: "Nod Krai",
            Country: "Shneznaya",
        },
        perma: {
            Area: "Unknown",
            Country: "Not Tevyat",
        },
    }
}

console.log(student1.address.temp.Country);


for(let key in student1){
    console.log(key, student1[key]);
    
}