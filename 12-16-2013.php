
<?php
	/*same as the original christmas tree except written in php does not take information from a webpage*/	
	/*initalize some variables*/
	$i = 0;
	$j = 0;
	$k = 0;
	$size = 5;
	$wood = '#';
	$leaves = '^';
	
	/*loop till we made our tree tree appears to be wonky*/
	for( $i = 1; $i < $size; $i++){
		/*print spaces here*/
		printSpace(($size - $i) / 2);
		
		/*draw the leaves here*/
		for( $j = 0; $j < $i; $j++){
			echo $leaves;
		}
		echo '<br>';
		
	}
	
		/*draw the tree trunk*/
		printSpace(($size - 2) / 2);
		echo $wood,$wood;
	
	function printSpace($size){
		for( $k = 0; $k < $size; $k++){
			echo '&nbsp;';
		}
		
	}
?>	