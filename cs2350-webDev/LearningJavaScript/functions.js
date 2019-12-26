var userName
userName = prompt("Enter your name")
//alert("Hello there, " + userName)


document.getElementById("hello").innerHTML = "Hello there, " + userName

function petMessage() {
    var petName
    petName = document.getElementById("petInput").value
    document.getElementById("petMessage").innerHTML =
        petName + " is a great pet!"
}

function computeArea() {
    var height, width, area
    height = document.getElementById("height").value
    width = document.getElementById("width").value
    area = height * width
    document.getElementById("areaMessage").innerHTML = "The area is " + area
}

function computeSum() {
    var one, two, sum
    one = document.getElementById("numOne").value
    two = document.getElementById("numTwo").value
    sum = parseFloat(one) + parseFloat(two)
    document.getElementById("sumMessage").innerHTML = "The sum of " + one + " and " + two + " is " + sum + "."
}

function convert() {
    var temperature, celsius
    temperature = document.getElementById("fahr").value
    celsius = (temperature - 32) * 5 / 9
    document.getElementById("temperatureMessage").innerHTML = temperature + " degrees Fahrenheit is " + celsius.toFixed(1) + " degrees Celsius."
}
