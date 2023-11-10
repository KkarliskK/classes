<?php
include 'Car.php';
include 'Cat.php';
include 'Train.php';

//***************the beginning****************//
// $myCar = new Car("Dacia");
// $myCar2 = new Car("Vulva");
// Car::makeNoise();


//*****************cat class******************//
// $Mincis = new Cat();
// $Mincis->set_name('Mincis');

// $Brincis = new Cat();
// $Brincis->set_name('Brincis');

//****************vehicle class****************//
Train::makeNoise();
Car::makeNoise();

echo "<br>";
$Train = new Train("Skoda");
echo "Train's Mileage: " .$Train->getMileage();
echo "<br>";
?>