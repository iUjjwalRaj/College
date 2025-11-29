function addTodo() {
    document.querySelector("input");
    let li=document.createElement('li');
    li.innerText=input.value;
    console.log(li);
    let ul=document.querySelector('ul');
    ul.prepend(li);
    input.value = '';

}