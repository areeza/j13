<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Document</title>
	<style>
	body{
		background-color: skyblue;
		color:white;
		margin:0px;
		padding:0px;
		}
	.container{
		text-align: center;
		width:100%;
		height:auto;
		padding:0px;
		margin:0px;
		}
	.wrapper{
		color:skyblue;
		width:500px;
		height:500px;
		border:5px solid pink;
		border-radius:50%;
		margin:0 auto;
		position:relative;
		box-sizing: border-box;
		background-color: white;
	}
	form{
		position:absolute;
		top:50%;
		left:50%;
		transform:translate(-50%,-50%);
	}
	label{
		font-size: 25px;
		color:;
	}
	input{
		font-size: 20px;
		border-radius: 10px;
		border:3px solid skyblue;
		outline:none;
		}
	input[type="text"]{
		min-width:300px;
		height:30px;
		padding:5px;
		margin-bottom:10px;
	}
	input[type="submit"]{
		padding:10px;
		width:100px;
		height:auto;
		background-color: pink;
	}
	</style>
	
</head>
<body>
	<?php
	if(isset($_POST['enter'])){
			$num=$_POST['numb'];
			function check_prime($num){
			$is_prime=true;
			for($a=2;$a<$num;$a++){
				if($num%$a==0){
					$is_prime=false;
				}
			}
			if($is_prime==true){
				return "Number is Prime";
			}
			else{
				return "Number is not Prime";
			}
		}
		 $result=check_prime($num);
	}
	?>
	<div class=container>
		<h1>FIND NUMBER IS PRIME OR NOT:</h1>
		<div class="wrapper">
		<form action="" method="POST">
			<h1>ENTER A NUMBER:</h1>
			<input type="text" placeholder="Enter a number" name="numb"/><br>
			<label>Output:</label><br>
			<input type="text" name="output" value="<?php echo @$result; ?>"/><br>
			<input type="submit" name="enter" value="Enter"/>
		</form>
	</div>
    </div>
	
</body>
</html>