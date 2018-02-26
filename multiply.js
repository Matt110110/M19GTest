var x, y;
$("document").ready(function () {
    $("#Btn").click(function (e){
        var elm = $(this);
        x = e.pageX - elm.offset().left;
        y = e.pageY - elm.offset().top;
        var mul = require('./multiply1.js');
        console.log(mul._multiply(x, y));
   });
});