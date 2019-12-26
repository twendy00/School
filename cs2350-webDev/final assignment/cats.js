window.addEventListener("load", addListeners)

var images =
    new Array("resources/domestic_shorthair_opt.jpg",
        "resources/himalayan_cat_opt.png", "resources/bengal_cat.jpg",
        "resources/siamese_cat_opt.jpg", "resources/savannah_cat_opt.jpg",
        "resources/korat_cat_opt.jpg", "resources/maine_coon_opt.jpg")
var index = 0
var caption =
    new Array("Domestic Shorthair Cat", "Himalayan Cat", "Bengal Cat",
        "Siamese Cat", "Savannah Cat", "Korat Cat", "Maine Coon Cat")
var timer

function addListeners() {
    document.getElementById("next").addEventListener("click", nextImage)
    document.getElementById("previous").addEventListener("click", prevImage)
    document.getElementById("play").addEventListener("click", playImage)
    document.getElementById("pause").addEventListener("click", pauseImage)
}

function nextImage() {
    index++
    if (index >= images.length) {
        index = 0;
    }
    document.getElementById("cat-pics").src = images[index]
    document.getElementById("caption").innerHTML = caption[index]
}

function prevImage() {
    if (index <= 0) {
        index = images.length
    }
    index--
    document.getElementById("cat-pics").src = images[index]
    document.getElementById("caption").innerHTML = caption[index]
}

function playImage() {
    clearInterval(timer);
    timer = setInterval("nextImage()", 2000);
}

function pauseImage() {
    clearInterval(timer);
}