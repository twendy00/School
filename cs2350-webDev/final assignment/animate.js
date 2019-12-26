$(document).ready(function () {

    $('#kittyheader').slideUp(800)
    $('.kittytext').slideUp(800)
    $('#kittyheader').slideDown(800)
    $('.kittytext').slideDown(800)
    $('#kittyimg').delay(2000)
    $('#kittyimg').hide()
    $('#kittyimg').fadeIn(2000)

    $('#kittybutton').click(function () {

        $('#kittyimg').animate({
            height: '0px',
            width: '0px',
            top: '500px',
            left: '500px'
        }, 3000, function () {
            $(this).show()
        })

        $('#kittyimg').delay(2000)

        $('#kittyimg').animate({
            height: '600px',
            width: '400px',
            top: '500px',
            left: '500px'
        }, 3000, "linear", function () {
            $(this).show()
        })
    })
})