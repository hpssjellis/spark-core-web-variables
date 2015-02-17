<?php

   $contents = file_get_contents('https://api.spark.io/v1/devices/0123456789abcdef/mess?access_token=123412341234');
   $obj = json_decode($contents);
   print $obj->{'result'}; 

?>

