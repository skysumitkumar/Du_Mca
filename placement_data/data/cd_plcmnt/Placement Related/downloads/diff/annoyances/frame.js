// * Copyright 2001-04 by Creative Element/Annoyances.org  * //

function Startup() {
	popupHandle=-1;
}

function showBox(boxName) {
	browseHandle=open('/quicklink/' + boxName + '.html','Browse','width=300,height=300,resizable=yes,scrollbars=yes,toolbar=no,location=no,directories=no,status=no,menubar=no,copyhistory=no');
	if (browseHandle.opener == null) browseHandle.opener = self;
	browseHandle.focus();
	return false;
}

function logout(){
	document.cookie = "id=; path=/; expires=Monday, 31-Dec-1979 23:12:40 GMT;";
	document.cookie = "pw=; path=/; expires=Monday, 31-Dec-1979 23:12:40 GMT;";
	setTimeout("refresh()", 50);
}

function refresh() {
	window.location.reload(false);
}

function expand(id, tree) {
	var branch = document.getElementById("b" + id);
	var bullet = document.getElementById("i" + id);
	
	if (branch.style.display == 'none') {
		branch.style.display = 'inline';
		bullet.src = "/pictures/forum/tree_1_minus" + tree + ".gif";
	}
	else if (branch.style.display == 'inline') {
		branch.style.display = 'none';
		bullet.src = "/pictures/forum/tree_1_plus" + tree + ".gif";
	}
}

