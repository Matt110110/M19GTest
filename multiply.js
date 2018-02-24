var x, y;
$("document").ready(function () {
   $("#Btn").click(function (e){
    var elm = $(this);
    x = e.pageX - elm.offset().left;
    y = e.pageY - elm.offset().top;

    console.log(x, y);
   });
});