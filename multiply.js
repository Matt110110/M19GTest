$("document").ready(function () {
   $("#Btn").click(function (e){
    var elm = $(this);
    var xPos = e.pageX - elm.offset().left;
    var yPos = e.pageY - elm.offset().top;

    console.log(xPos, yPos);
   });
});