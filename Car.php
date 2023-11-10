<?php
include_once 'vehicle.php';


Class Car {

    public function __destruct()
    {
        echo $this->brand. " is dead <br>";
    }

    static function makeNoise()
    {
        echo "vroom vroom <br>";
    }
}


?>