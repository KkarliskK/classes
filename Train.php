<?php
include_once 'vehicle.php';

class Train extends Vehicle{

    static function makeNoise()
    {
        echo "chuuu chuuuu <br>";
    }


    public function getMileage()
    {
        return $this->mileage;
    }
}

?>