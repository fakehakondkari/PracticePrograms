<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
<?php

$con= mysqli_connect("localhost", "root", "", "e_Commerse")
        or die(mysqli_errno($con));

$select_query="SELECT id,emailid, firstname FROM users ";

$select_query_result=mysqli_query($con,$select_query)
        or die(mysqli_error($con));

/* $total_rows_fetched= mysqli_num_rows($select_query_result);

echo "Total rows fetched".$total_rows_fetched;
$row= mysqli_fetch_array($select_query_result);
echo $row['id'];
echo $row['emailid'];
echo $row['firstname']. "<br>";

$row= mysqli_fetch_array($select_query_result);
echo $row['id'];
echo $row['emailid'];
echo $row['firstname']."<br>";

$row= mysqli_fetch_array($select_query_result);
echo $row['id'];
echo $row['emailid'];
echo $row['firstname']. "<br>";

$row= mysqli_fetch_array($select_query_result);
echo $row['id'];
echo $row['emailid'];
echo $row['firstname']. "<br>";
function sum($parameter1,$parameter2)
{
$addition=$parameter1+$parameter2;
return $addition;
}*/



?>
<html>
    <head>
          <title>E_Commerce Login Page</title>
        <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" >
        <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.12.4/jquery.min.js"></script>
    <!-- Latest compiled and minified JavaScript -->
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
    <link rel="stylesheet" href="style.css" type="text/css">
            
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
    </head>
    <body>
        
        <div class="container">
            <?php while($row= mysqli_fetch_array($select_query_result)){ ?>
            
            <div class="row">
                <div class="col-lg-12">
                    <h1>Users</h1>
                </div>
            </div>
            <div class="row">
                <div class="col-xs-2">ID</div>
                <div class="col-xs-10"><?php echo $row['id'] ?></div>
            </div>
            
            <div class="row">
                <div class="col-xs-2">Email_id </div>
                <div class="col-xs-10"><?php echo $row['emailid']?></div>
            </div>
            
            <div class="row">
                <div class="col-xs-2">First_Name</div>
                <div class="col-xs-10"><?php echo $row['firstname'] ?></div>
            </div>
            
            <div class="row">
                <div class="col-xs-2">product_purchased</div>
                <div class="col-xs-10"><?php echo number_of_products_purchased($con, $row['id']);?></div>
            </div>
            <?php } ?>
        </div>
    </body>
</html>

<?php
function number_of_products_purchased($con,$userid){
    $product_purchased="SELECT id FROM users_products where user_id='$userid'";
    $user_product_result= mysqli_query($con, $product_purchased);
    $number_of_products= mysqli_num_rows($user_product_result);
    return $number_of_products;
}
?>