<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Reverse a string</title>
</head>
<body>
	<?php
		if(isset($_POST['reverse'])){
			$str=$_POST['string'];
			$new=strrev($str);
			}

		if(isset($_POST['reverse2'])){
			 $stri=$_POST['string2'];
			$length=strlen($stri);
			$rev="";
			for ($a=($length-1);$a>=0;$a--){
				 $rev.=$stri[$a];
		   }
			$neww=$rev;



// $length = strlen($string);  
// for ($i=($length-1) ; $i >= 0 ; $i--)   
// {  
//   echo $string[$i];  
// }  
			}
		
	?>
	<form method="POST">
		<h1>WITH INBUILT FUNCTION.</h1>
		<input type="text" placeholder="Enter a string" name="string">
		<input type="text" value="<?php echo @$new;?>">
		<input type="submit" value="Reverse" name="everse">
	</form>
	

	<form method="POST">
		<h1>WITHOUT INBUILT FUNCTION.</h1>
		<input type="text" placeholder="Enter a string" name="string2">
		<input type="text" value="<?php echo @$neww;?>">
		<input type="submit" value="Reverse It" name="reverse2">
	</form>
	
</body>
</html>