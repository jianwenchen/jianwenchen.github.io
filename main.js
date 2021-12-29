let myButton = document.querySelector('button');
let myImage = document.querySelector('img');
let myIm = ['bfs.svg', 'dfs.svg']
let i = 0
myButton.onclick = function() {
    i = (i + 1) % 2
    myImage.setAttribute('src', myIm[i])
}