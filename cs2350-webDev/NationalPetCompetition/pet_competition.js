window.addEventListener("load", addListeners)

function addListeners() {

    // Calculates kennel size based on pet weight
    document.getElementById("weight").addEventListener("change", function () {
        var weight

        weight = parseFloat(document.getElementById("weight").value)

        if (isNaN(weight)) {
            document.getElementById("size").value = ""
        } if (weight <= 4) {
            document.getElementById("size").value = "mini"
        } if (weight > 4 & weight <= 12) {
            document.getElementById("size").value = "small"
        } if (weight > 12 & weight <= 50) {
            document.getElementById("size").value = "medium"
        } if (weight > 50) {
            document.getElementById("size").value = "large"
        }
    })

    // Calculates days of boarding and boarding costs
    document.getElementById("days").addEventListener("change", function () {
        var days, cost

        days = parseInt(document.getElementById("days").value)

        if (isNaN(days)) {
            document.getElementById("days").value = 0
            document.getElementById("boardingFee").value = "0.00"
        } else {
            document.getElementById("days").value = days
            cost = days * 19.99
            document.getElementById("boardingFee").value = cost.toFixed(2)
        }

        computeCost()
    })

    // Displays sing box if sing checkbox is true
    document.getElementById("sing").addEventListener("change", function () {
        if (document.getElementById("sing").checked) {
            document.getElementById("singAdd").style.display = "block"
        } else {
            document.getElementById("singAdd").style.display = "none"
        }

        computeCost()
    })

    // Displays cute box if cute checkbox is true
    document.getElementById("cute").addEventListener("change", function () {
        if (document.getElementById("cute").checked) {
            document.getElementById("cuteAdd").style.display = "block"
        } else {
            document.getElementById("cuteAdd").style.display = "none"
        }

        computeCost()
    })

    // Displays trick box if trick checkbox is true
    document.getElementById("trick").addEventListener("change", function () {
        if (document.getElementById("trick").checked) {
            document.getElementById("trickAdd").style.display = "block"
        } else {
            document.getElementById("trickAdd").style.display = "none"
        }

        computeCost()
    })

    // Calculates total boarding and registration costs
    function computeCost() {
        var regCost = 0
        var events = 0
        var boardCost = 0
        var total

        boardCost = parseFloat(document.getElementById("boardingFee").value)

        if (isNaN(boardCost)) {
            boardCost = 0
        } else {
            boardCost
        }

        if (document.getElementById("sing").checked) {
            events++
        } if (document.getElementById("cute").checked) {
            events++
        } if (document.getElementById("trick").checked) {
            events++
        }

        regCost = 120 * events
        total = regCost + boardCost

        document.getElementById("boardingCost").value = boardCost.toFixed(2)
        document.getElementById("registrationCost").value = regCost.toFixed(2)
        document.getElementById("totalCost").value = total.toFixed(2)
    }
}