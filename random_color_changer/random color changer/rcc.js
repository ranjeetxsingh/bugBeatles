const button = document.querySelector("button");
const h1 = document.querySelector("h1");

function changeColor() {

    let r = Math.floor(Math.random() * 255) + 1 ;
    let g = Math.floor(Math.random() * 255) + 1 ;
    let b = Math.floor(Math.random() * 255) + 1 ;

    document.body.style.backgroundColor = `rgb(${r},${g},${b})`;
    h1.innerText = `rgb(${r},${g},${b})` ;
}

button.addEventListener('click' , changeColor) ;

window.addEventListener('keydown' , function(e){
    console.log(e.code);
} )
