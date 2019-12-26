window.addEventListener("load", addListeners)

function addListeners() {

    // Shows individual selection box when radio button is true
    document.getElementById("individual").addEventListener("click", function () {
        document.getElementById("individual_select").style.display = "block"
        document.getElementById("random_select").style.display = "none"
    })

    // Shows random selection box when radio button is true
    document.getElementById("random").addEventListener("click", function () {
        document.getElementById("random_select").style.display = "block"
        document.getElementById("individual_select").style.display = "none"
    })


    // Calculates the aggregate cost based on number of bottles purchased
    document.getElementById("bottles").addEventListener("change", function () {
        var bottles, cost

        bottles = parseInt(document.getElementById("bottles").value)

        if (isNaN(bottles) || bottles < 1) {
            document.getElementById("bottles").value = 0
            document.getElementById("bottle_cost").value = "0.00"
        } else {
            document.getElementById("bottles").value = bottles
            cost = bottles * 14.99
            document.getElementById("bottle_cost").value = cost.toFixed(2)
        }

        computeTotal()
    })

    // Calculates the aggregate cost based on number of appetizer pairings
    // purchased
    document.getElementById("appetizers").addEventListener("change", function () {
        var apps, cost

        apps = parseInt(document.getElementById("appetizers").value)

        if (isNaN(apps) || apps < 1) {
            document.getElementById("appetizers").value = 0
            document.getElementById("app_cost").value = "0.00"
        } else {
            document.getElementById("appetizers").value = apps
            cost = apps * 9.99
            document.getElementById("app_cost").value = cost.toFixed(2)
        }

        computeTotal()
    })

    // Calculates the aggregate cost based on number of wine samples purchased
    document.getElementById("samples").addEventListener("change", function () {
        var samples, cost

        samples = parseInt(document.getElementById("samples").value)

        if (isNaN(samples) || samples < 1) {
            document.getElementById("samples").value = 0
            document.getElementById("sample_cost").value = "0.00"
        } else {
            document.getElementById("samples").value = samples
            cost = samples * 6.99
            document.getElementById("sample_cost").value = cost.toFixed(2)
        }

        computeTotal()
    })

    // Calculates total cost
    function computeTotal() {
        var bottles, apps, samples, total

        bottles = parseFloat(document.getElementById("bottle_cost").value)
        apps = parseFloat(document.getElementById("app_cost").value)
        samples = parseFloat(document.getElementById("sample_cost").value)

        total = bottles + apps + samples

        document.getElementById("totalBottles").value = bottles.toFixed(2)
        document.getElementById("totalApps").value = apps.toFixed(2)
        document.getElementById("totalSamples").value = samples.toFixed(2)
        document.getElementById("totalCost").value = total.toFixed(2)
    }

}