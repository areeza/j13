<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Calculate Factorial</title>
	<style>
		body{
			background-color: grey;
		}
		h1{
			text-align: center;
		}
		.container{
			width:100%;
			height:700px;
			max-height:600px;
			padding:15px; 
			box-sizing: border-box;
		}
		form{	
			box-sizing:border-box;		
			width:50%;
			height:400px;		
			margin:0 auto;
			background-color: black;
			color:white;
			margin-top:7%;
			padding:20px;
		}
		input[type="text"]{
			width:98%;
			height:50px;
			margin-top:20px;
			margin-bottom:20px;
			font-size:30px;
			outline-color:black;
			border:2px solid black;

		}
		input[type="submit"]{
			border: none;
			padding:15px;
			margin-left: 10px;
			font-size:20px;
			color:#180D09;
			background-color:white;
			border:2px solid #180D09;
			border-radius: 20px;			
		}
		</style>
</head>
<body>
	<?php
	if(isset($_POST['submit'])){
		$num=$_POST['numb'];
		function factorial($num){
		$fact=1;
		for($a=1;$a<=$num;$a++){
			$fact*=$a;
		}
		return $fact;
	}
	$ans=factorial($num);
	

}
	?>
	<div class=container>
		<h1>FIND FACTORIAL OF A NUMBER</h1>
		<form action="" method="POST">
			<h1>ENTER A NUMBER:</h1>
			<input type="text" placeholder="Enter a number" name="numb"/>
			<label>Output:</label>
			<input type="text" name="output" value="<?php echo @$ans; ?>"/>
			<input type="submit" name="submit" value="Answer"/>
		</form>
    </div>

	
</body>
</html>