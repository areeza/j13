<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>sorting arrays</title>
</head>
<body>
	<?php
	//ascending oder
	$day=array("Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday");
	sort($day);
	$arrlength = count($day);
	$result1="";
    for($x = 0; $x < $arrlength; $x++) {
	     $result1.=$day[$x]."<br>";
        }
   	//descending oder
    rsort($day);
    $result2="";
    for($x = 0; $x < $arrlength; $x++) {
	     $result2.=$day[$x]."<br>";
        }
	?>
	<h1>IN ASCENDING ORDER:-</h1>
	<p><?php echo ($result1);?></p>
	<h1>IN DESCENDING ORDER:-</h1>
   	<p><?php echo ($result2);?></p>

</body>
</html>