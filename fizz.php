<?php

$i = 0;
for ($i=0; $i<=100; $i++) 
{
  if(($i % 3 == 0) && ($i % 5 == 0)) {
    print("\nFizzBuzz");
  }elseif ($i % 5 == 0) {
    print("\nBuzz");
  }elseif($i % 3 == 0) {
    print("\nFizz");
  }else {
    print ("\n".$i);
  }
}

$x = "\nstuff";

$y = $x;
echo $x
?>
