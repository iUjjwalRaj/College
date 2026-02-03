// let main = document.querySelector("main");
// let fullName = "Alya"

// main.innerHTML = `<h1> INDIA </h1> ${fullName} <p> Capita of India is New Delhi </p>`;

// let arr = [95, 24, 78, 90, 45, 36];
// // main.innerHTML = `my perecntage ${arr[0]}`;
// // main.innerHTML = `my perecntage ${arr[1]}`;


// // main.innerHTML = `${arr}`;

// main.innerHTML = arr.map((Element) => {
//     return  `
//     <section>
//         <h1> percentage : ${Element}</h1>
//         <p> IIT Jodhpur </p>
//     </section>`

// }).join("")




let studentArrayData = [
    {
        fname: "Alya",
        age: 15,
        birthPlace: "Russia",
        citizenship: "Japan",
        profileImage: "https://i.postimg.cc/3x3QzSGq/placeholder.png",
        University: "None"
    },
    {
        fname: "Chizuru",
        age: 20,
        birthPlace: "Japan",
        citizenship: "Japan",
        profileImage: "https://i.postimg.cc/3x3QzSGq/placeholder.png",
        University: "University of Kyoto"
    },
    {
        fname: "Suzune Horikita",
        age: 17,
        birthPlace: "Japan",
        citizenship: "India",
        profileImage: "https://i.postimg.cc/3x3QzSGq/placeholder.png",
        University: "Advance Nurturing Technical University"
    },
    {
        fname: "Maya",
        age: 20,
        birthPlace: "India",
        citizenship: "India",
        profileImage: "https://i.postimg.cc/3x3QzSGq/placeholder.png",
        University: "Benette University"
    },
    {
        fname: "Tanirika",
        age: 21,
        birthPlace: "India",
        citizenship: "USA",
        profileImage: "https://i.postimg.cc/3x3QzSGq/placeholder.png",
        University: "IIT Jodhpur"
    },
];

let main = document.querySelector("main");

main.innerHTML = studentArrayData.map((Element) => {
    return `
    <section>
        <h1> Student Name: ${Element.fname}</h1>
        <h4> Age: ${Element.age}</h4>
        <h4> University: ${Element.University}</h4>
        <h4> Birth Place: ${Element.birthPlace}</h4>
        <h4> Citizenship: ${Element.citizenship}</h4>
        <img src="${Element.profileImage}">
    </section>
    `;
}).join("");
