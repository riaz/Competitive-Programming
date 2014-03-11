<?php
session_start();

function loginForm(){
	echo '
		<div id="loginform">
		<form action="index.php" method="POST">
			<p>Please enter your name to continue:</p>
			<label for="name">Name:</label>
			<input type="text" name="name" id="name" />
			<input type="submit" name="enter" id="enter" value="Enter" />
		</form>
		</div>
	';
}

if(isset($_POST['enter'])){
	if($_POST['name'] != ""){
		$_SESSION['name'] = stripslashes(htmlspecialchars($_POST['name']));	
		echo $_SESSION['name'];
	}else{
		echo '<span class="error">Please type in a name</span>';
	}
}
?>
<!DOCTYPE html>
<html>
	<head>
		<title>Client-Side Terminal</title>
		<link rel="stylesheet" href="css/styles.css" type="text/javascript"/>		
	</head>
	<body>
	<?php
		if(!isset($_SESSION['name'])){
		loginForm();
		}else
    	{
	?>
		<div id="wrapper">
			<div id="menu">
				<p class="welcome">Welcome,<b><?php echo $_SESSION['name'] ?></b></p>
				<p class="logout"><a id="exit" href="#">Exit Chat</a></p>
				<div style="clear:both"></div>				
			</div>
			<div id="chatbox"></div>

			<form name="message" action="">
				<input name="usermsg" type="text" id="usermsg" size="63" />
				<input name="submitmsg" type="submit" id="submit" value="Send" />			
			</form>
		</div>
		<script type="text/javacript" src="js/jquery.js"></script>
		<script type="text/javacript">
			$.({
			});
		</script>
	<?php
		}
	?>
	</body>
</html>