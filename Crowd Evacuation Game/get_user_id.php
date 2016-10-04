<?php
if ($_SERVER['REQUEST_METHOD'] === 'GET')
{
	if(!file_exists("user_id.txt"))
	{
		$newfile=fopen("user_id.txt", "w");
		fwrite($newfile,"1");
		fclose($newfile);
	}
	
	$datafile=fopen("user_id.txt", "r");
	$datacount=intval(fread($datafile,filesize("user_id.txt")));
	fclose($datafile);
	
	echo $datacount;
	
	$datacount=$datacount+1;
	
	$writefile=fopen("user_id.txt", "w");
	fwrite($writefile,strval($datacount));
	fclose($writefile);
	
}
?>