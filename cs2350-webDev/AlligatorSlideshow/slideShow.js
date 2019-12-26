window.addEventListener("load", addListeners);

var images = new Array("alligator.jpg", "beware.jpg", "fatboy.jpg",
    "gatorRain.jpg", "gatorEyes.jpg", "gatorGoing.jpg");
var index = 0;
var caption = new Array("Look at the alligator!", "Underwater alligator.",
    "Above water alligator.", "The alligator sees you.",
    "The alligator moved closer.", "The alligator has a big tail.");
var timer;

function addListeners() {
    document.getElementById("next").addEventListener("click", changeImage);
    document.getElementById("play").addEventListener("click", function () {
        clearInterval(timer);
        timer = setInterval("changeImage()", 1000);
    });
    document.getElementById("pause").addEventListener("click", pauseSlideShow);
    document.getElementById("previous").addEventListener("click", function () {
        if (index <= 0) {
            index = images.length;
        }
        index--;
        document.getElementById("picture").src = images[index];
        document.getElementById("caption").innerHTML = caption[index];

    });

}

function changeImage() {
    index++;
    if (index >= images.length) {
        index = 0;
    }
    document.getElementById("picture").src = images[index];
    document.getElementById("caption").innerHTML = caption[index];


}

function pauseSlideShow() {
    clearInterval(timer);
}