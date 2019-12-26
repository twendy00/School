window.addEventListener("load", addListeners)

var conePictures = ["images/cone0.jpg", "images/cone1.jpg",
    "images/cone2.jpg",
    "images/cone3.jpg",
    "images/cone4.jpg",
    "images/cone5.jpg",
    "images/cone6.jpg",
    "images/cone7.jpg",
    "images/cone8.jpg",
    "images/cone9.jpg",
    "images/cone10.jpg"]

var timer
var index = 0

function addListeners() {
    document.getElementById("show").addEventListener("click", showFunction)
    document.getElementById("build").addEventListener("click", function () {
        var vanillaScoops = document.getElementById("vanilla").value
        var chocolateScoops = document.getElementById("chocolate").value
        var strawberryScoops = document.getElementById("strawberry").value
        var totalScoops = parseFloat(vanillaScoops) + parseFloat(chocolateScoops)
            + parseFloat(strawberryScoops)

        setImage(totalScoops)

        if (totalScoops > 0 && totalScoops <= 10) {
            document.getElementById("description").innerHTML = "The cone has " +
                totalScoops + " scoops. There is " + vanillaScoops + " vanilla, " +
                chocolateScoops + " chocolate, and " + strawberryScoops +
                " strawberry scoops. That cone is being built and will be delivered soon."
        }
    })

    document.getElementById("showAll").addEventListener("click", startShow)
    document.getElementById("stop").addEventListener("click", function () {
        clearInterval(timer)
    })
}

function showFunction() {
    var vanillaScoops = document.getElementById("vanilla").value
    var chocolateScoops = document.getElementById("chocolate").value
    var strawberryScoops = document.getElementById("strawberry").value
    var totalScoops = parseFloat(vanillaScoops) + parseFloat(chocolateScoops) + parseFloat(strawberryScoops)

    setImage(totalScoops)
}

function setImage(totalScoops) {
    clearInterval(timer)
    if (totalScoops > 10) {
        document.getElementById("picture").src = "images/cone0.jpg"
        document.getElementById("description").innerHTML =
            "That is too big. Please keep the number of scoops to less than 10."
        index = 0
    } else if (totalScoops < 0) {
        document.getElementById("picture").src = "images/cone0.jpg"
        document.getElementById("description").innerHTML =
            "That is too small. Please keep the number of scoops greater than 0."
        index = 0
    } else {
        document.getElementById("picture").src =
            "images/cone" + totalScoops + ".jpg"
        document.getElementById("description").innerHTML =
            "Looking good!"
        index = totalScoops
    }
}

function startShow() {
    clearInterval(timer)
    timer = setInterval(changePicture, 1000)
}

function changePicture() {
    document.getElementById("picture").src = conePictures[index]
    index++;

    if (index >= conePictures.length) {
        index = 0
    }
}