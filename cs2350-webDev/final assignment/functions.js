function getBlanks() {
    var meal, superlative, fatty, sweet, gross, adjective, number1, number2,
        time1, adverb, gainLose, number3, time2, animal, emotion;

    meal = document.getElementById("meal").value;
    superlative = document.getElementById("superlative").value;
    fatty = document.getElementById("fatty").value;
    sweet = document.getElementById("sweet").value;
    gross = document.getElementById("gross").value;
    adjective = document.getElementById("adjective").value;
    number1 = parseFloat(document.getElementById("number1").value);
    number2 = parseFloat(document.getElementById("number2").value);
    time1 = document.getElementById("time1").value;
    adverb = document.getElementById("adverb").value;
    gainLose = document.getElementById("gain/lose").value;
    number3 = parseFloat(document.getElementById("number3").value);
    time2 = document.getElementById("time2").value;
    animal = document.getElementById("animal").value;
    emotion = document.getElementById("emotion").value;

    story = "Have you ever heard of the <span>" + meal +
        "</span> diet? It's the <span>" + superlative +
        "</span> diet ever. In the <span>" + meal +
        "</span> diet, all you eat are <span>" + meal +
        "</span>s. It doesn't matter what is in them. You can have <span>" +
        fatty + "</span>, <span>" + sweet + "</span> or <span>" + gross +
        "</span> in the <span>" + meal +
        "</span>, and you're guaranteed to become <span>" + adjective +
        "</span>."

    document.getElementById("story").innerHTML = story;

    story2 = "<span>" + number1 + "</span> people are doing the <span>" + meal +
        "</span> diet right now. By eating <span>" + number2 + "</span> <span>"
        + meal + "</span>s every <span>" + time1 + "</span>, you will <span>" +
        adverb + "</span> <span>" + gainLose + "</span> weight. After <span>" +
        number3 + "</span> <span>" + time2 +
        "</span>, you will start seeing results. You will look as <span>" +
        adjective + "</span> as a <span>" + animal + "</span>! Try the <span>"
        + meal + "</span> diet today, and you will be so <span>" + emotion +
        "</span> that you did."

    document.getElementById("story2").innerHTML = story2;

}