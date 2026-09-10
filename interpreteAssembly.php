<?php
	session_start();
	if(!isset($_SESSION["ah"])){
		$_SESSION["ah"]=0;
	}
	if(!isset($_SESSION["al"])){
		$_SESSION["al"]=0;
	}
	if(!isset($_SESSION["bh"])){
		$_SESSION["bh"]=0;
	}
	if(!isset($_SESSION["bl"])){
		$_SESSION["bl"]=0;
	}
	if(!isset($_SESSION["ch"])){
		$_SESSION["ch"]=0;
	}
	if(!isset($_SESSION["cl"])){
		$_SESSION["cl"]=0;
	}
	if(!isset($_SESSION["dh"])){
		$_SESSION["dh"]=0;
	}
	if(!isset($_SESSION["dl"])){
		$_SESSION["dl"]=0;
	}
	if(!isset($_SESSION["cmdMessage"])){
		$_SESSION["cmdMessage"]="|";
	}
	$error=false;
	$ignore=false;
	$errorMessage="";
?>
<?php
	if($_SERVER["REQUEST_METHOD"]=="POST"){
		if(isset($_POST["response"])&&($_SESSION["ah"]=="01h"||$_SESSION["ah"]=="01H"))
				$_SESSION["al"]=ord(substr($_POST["response"],0,1));
		$_SESSION["cmdMessage"]="|";
	}

	if($_SERVER["REQUEST_METHOD"]=="POST"){
		if(!isset($_POST["command"])||$_POST["command"]=="")
			$ignore=true;
		else{
			$line=explode(" ",$_POST["command"]);
			if(count($line)!=2){
				$error=true;
				$errorMessage="Espressione non valida";
			}
			else{
				$command=strtoupper($line[0]);
				$variable=explode(",",$line[1]);
				if(count($variable)==1){
					if($command=="INC")
						$_SESSION[$variable[0]]++;
					else if($command=="DEC"){
						$_SESSION[$variable[0]]--;
						if($_SESSION[$variable[0]]<0)
							$_SESSION[$variable[0]]=0;
					}
					else if($command=="INT"){
						if($variable[0]=="21h"||$variable[0]=="21H"){
							if($_SESSION["ah"]=="01h"||$_SESSION["ah"]=="01H")
								$_SESSION["cmdMessage"]="Input di 1 tasto della tastiera";
							else if($_SESSION["ah"]=="06h"||$_SESSION["ah"]=="06H")
								$_SESSION["cmdMessage"]=chr($_SESSION["dl"]);
							else{
								$error=true;
								$errorMessage="Invalido valore in registro AH";
							}
						}
					}
					else{
						$error=true;
						$errorMessage="Sinstassi del comando errata";
					}
				}
				else{
					$variable[0]=strtolower($variable[0]);
					$variable[1]=strtolower($variable[1]);
					//IFville
					if($variable[0]!="ah"&&$variable[0]!="al"&&$variable[0]!="bh"&&$variable[0]!="bl"&&$variable[0]!="ch"&&$variable[0]!="cl"&&$variable[0]!="dh"&&$variable[0]!="dl"){
						$error=true;
						$errorMessage="Destinazione non valida";
					}
					else if($command=="MOV"){
						if($variable[1]!="ah"&&$variable[1]!="al"&&$variable[1]!="bh"&&$variable[1]!="bl"&&$variable[1]!="ch"&&$variable[1]!="cl"&&$variable[1]!="dh"&&$variable[1]!="dl"){
								echo var_dump($variable);
								$_SESSION[$variable[0]]=$variable[1];
						}
						else
							$_SESSION[$variable[0]]=$_SESSION[$variable[1]];
					}
					else if($command=="ADD"){
						if($variable[1]!="ah"&&$variable[1]!="al"&&$variable[1]!="bh"&&$variable[1]!="bl"&&$variable[1]!="ch"&&$variable[1]!="cl"&&$variable[1]!="dh"&&$variable[1]!="dl"){
							if(is_numeric($variable[1]))
								$_SESSION[$variable[0]]+=$variable[1];
							else{
								$error=true;
								$errorMessage="Sintassi del comando errata";
							}
						}
						else
							$_SESSION[$variable[0]]+=$_SESSION[$variable[1]];
					}
					else if($command=="SUB"){
						if($variable[1]!="ah"&&$variable[1]!="al"&&$variable[1]!="bh"&&$variable[1]!="bl"&&$variable[1]!="ch"&&$variable[1]!="cl"&&$variable[1]!="dh"&&$variable[1]!="dl"){
							if(is_numeric($variable[1]))
								$_SESSION[$variable[0]]-=$variable[1];
							else{
								$error=true;
								$errorMessage="Sintassi del comando errata";
							}
						}
					}
					else{
						$error=true;
						$errorMessage="Sintassi del comando errata";
					}
				}
			}
		}
	}
?>
<html>
	<head>
		<title>Interprete ASSEMBLY</title>
		<style>
			body{
				font-family:courier;
				background-color:#003300;
			}
			div{
				padding:10px;
			}
			#registri{
				border-style:double;
				background-color:#cca300;
				color:black;
				font-weight:bold;
				border-color:#669900;
				float:left;
				height:350px;
				width:125px;
			}
			#form{
				border-style:ridge;
				clear:left;
				margin-top:20%;
				margin-right:83%;
				font-size:20px;
				<?php if($_SERVER["REQUEST_METHOD"]=="POST"){
						if($ignore==false){
							echo "border-bottom-style:none;";
						}
						if($error==true)
							echo "color:#e65c00; background-color:#660000; border-color:#e65c00;";
						else
							echo "color:cyan; background-color:#006622; border-color:cyan;";
					}
					else 
						echo "color:#00ff00; background-color:#6699ff; border-color:#6600ff;";
				?>
			}
			#errore{
				border-style:ridge;
				margin-right:83%;
				background-color:#660000;
				color:#e65c00;
				border-top-style:none;
				border-color:#e65c00;
			}
			#eseguito{
				border-style:ridge;
				border-color:cyan;
				margin-right:83%;
				background-color:#006622;
				color:cyan;
				border-top-style:none;
			}
			#cmd{
				background-color:black;
				color:white;
				border-style:solid;
				border-color:white;
				height:350px;
				width:500px;
				margin-left:20px;
				float:left;
			}
		</style>
	</head>
	<body>
		<div id="registri">
			<h2>REGISTRI</h2>
			<p>AH: <?php echo $_SESSION["ah"];?></p>
			<p>AL: <?php echo $_SESSION["al"];?></p>
			<p>BH: <?php echo $_SESSION["bh"];?></p>
			<p>BL: <?php echo $_SESSION["bl"];?></p>
			<p>CH: <?php echo $_SESSION["ch"];?></p>
			<p>CL: <?php echo $_SESSION["cl"];?></p>
			<p>DH: <?php echo $_SESSION["dh"];?></p>
			<p>DL: <?php echo $_SESSION["dl"];?></p>
		</div>
		<div id="cmd">
			<p><?php echo $_SESSION["cmdMessage"];?></p>
			<form action="" method="POST">
				<input type="text" name="response" size="1" <?php if($_SESSION["cmdMessage"]=="|"||strcmp($_SESSION["cmdMessage"],chr($_SESSION["dl"]))==0) echo "disabled"; else echo "autofocus";?>>
				<input type="submit" <?php if($_SESSION["cmdMessage"]=="|"||strcmp($_SESSION["cmdMessage"],chr($_SESSION["dl"]))==0) echo "disabled";?>>
			</form>
		</div>
		<br>
		<div id="form">
			&nbsp;
			<form action="" method="POST">
				<label for="command"><b>COMANDO:</b></label>
				<input type="text" name="command" <?php if($_SESSION["cmdMessage"]!="|"&&strcmp($_SESSION["cmdMessage"],chr($_SESSION["dl"]))!=0) echo "disabled"; else echo "autofocus";?>><br>
				<input type="submit" <?php if($_SESSION["cmdMessage"]!="|"&&strcmp($_SESSION["cmdMessage"],chr($_SESSION["dl"]))!=0){ echo "disabled"; $_SESSION["cmdMessage"]="|";}?>>
			</form>
		</div>
		<?php if($_SERVER["REQUEST_METHOD"]=="POST"){
			if($error==true&&$ignore==false){
				echo '<div id="errore">';
				echo '<p>ERRORE: '.$errorMessage.'</p>';
				echo '</div>';
			}
			else if($ignore==false){
				echo '<div id="eseguito">';
				echo '<p>Comando '.$command." e' stato eseguito con successo</p>";
				echo '</div>';
			}
		}
		?>
	</body>
</html>