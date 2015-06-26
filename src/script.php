<?php


	error_reporting(0);
	
	$table 	= $_GET['tabela']
	$id 		= $_GET['id']

	$host 			= "server";
	$database 	= "database"
	$user 			= "user";
	$password 	= "password";
	
	$connection = mysql_connect($host, $user, $password) or die(mysql_error());
	mysql_select_db($database, $connection) or die (mysql_error());
	
	$code = "SELECT * FROM $table WHERE id="$id";";
	$result = mysql_query($code) or die (mysql_error());
	
	while ($read = mysql_fetch_row($result)) {
		echo $read[0];
	}
	
	// Concluído.
	mysql_free_result($result);
	mysql_close();

?>