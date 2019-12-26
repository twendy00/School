$(document).ready(function () {
    $('.sue').slideUp()
    $('.sue').slideDown()
    $('div').fadeOut()
    $('div').fadeIn()

    $('#fireworks').click(function () {

        $('.purple').animate({
            height: '0px',
            width: '0px',
            top: '300px',
            left: '460px'
        }, function () {
            $(this).show()
        })

        $('.green').animate({
            height: '0px',
            width: '0px',
            top: '300px',
            left: '460px'
        }, function () {
            $(this).show()
        })

        $('.red').animate({
            height: '0px',
            width: '0px',
            top: '300px',
            left: '460px'
        }, function () {
            $(this).show()
        })

        $('h2').fadeOut()

        $('.purple').animate({
            height: '640px',
            width: '640px',
            top: '15px',
            left: '155px'
        }, 600, "linear", function () {
            $(this).hide()
        })

        $('.green').delay(560).animate({
            height: '640px',
            width: '640px',
            top: '15px',
            left: '155px'
        }, 600, "linear", function () {
            $(this).hide()
        })

        $('.red').delay(1100).animate({
            height: '640px',
            width: '640px',
            top: '15px',
            left: '155px'
        }, 600, "linear", function () {
            $(this).fadeOut(1200)
        })

        $('h2').delay(1700).fadeIn(1800)
    })
})