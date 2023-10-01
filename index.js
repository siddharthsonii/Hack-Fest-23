function initialize() {
	if (checkCookie('theme')) {
		theme = getCookie('theme');
		if (theme == 'light') {
			toggleTheme();
		}
	} else {
		setCookie('theme', 'dark', 1);
	}
}

function validateEmail(email) {
	const re = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
	return re.test(String(email).toLowerCase());
}

function test() {
	window.alert('Chal Raha hai...');
}

function toggleTheme() {
	var theme = document.getElementsByClassName('theme')[0];
	var themeButton = document.getElementById('theme-button');

	if (theme.getAttribute('href') == 'css/light.css') {
		themeButton.innerHTML = '	<i class="fas fa-moon tray-icon"></i>';
		theme.setAttribute('href', 'css/dark.css');
		setCookie('theme', 'dark', 1);
	} else {
		themeButton.innerHTML = '	<i class="fas fa-sun tray-icon"></i>';
		theme.setAttribute('href', 'css/light.css');
		setCookie('theme', 'light', 1);
	}
}
 var rows = prompt("How many rows for your multiplication table?");
    var cols = prompt("How many columns for your multiplication table?");
    if(rows == "" || rows == null)
   		 rows = 10;
    if(cols== "" || cols== null)
   		 cols = 10;
    createTable(rows, cols);
    function createTable(rows, cols)
    {
      var j=1;
      var output = "<table border='1' width='500' cellspacing='0'cellpadding='5'>";
      for(i=1;i<=rows;i++)
      {
    	output = output + "<tr>";
        while(j<=cols)
        {
  		  output = output + "<td>" + i*j + "</td>";
   		  j = j+1;
   		}
   		 output = output + "</tr>";
   		 j = 1;
    }
    output = output + "</table>";
    document.write(output);
    }

function toggleTrayActive(elementId) {
	var next = document.getElementById(elementId);
	var current = document.getElementsByClassName('tray-active');
	current[0].className = current[0].className.replace('tray-active', '');
	next.className += ' tray-active';
}

function black_box_testing() {
	window.alert('Black-box testing is a method of software testing that examines the functionality of an application without peering into its internal structures or workings. This method of test can be applied virtually to every level of software testing: unit, integration, system and acceptance.');
}
