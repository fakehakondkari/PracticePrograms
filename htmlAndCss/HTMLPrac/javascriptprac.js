
function mypopup(){
	alert("how r you?");

}

function myokcancel() {
	var txt;
	if (confirm("Press a button!")) {
		txt="you pressed OK!";
	}else{
		txt="You pressed cancel";
	}
	document.getElementById("demo3").innerHTML=txt;
}
