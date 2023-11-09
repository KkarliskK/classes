<?php

Class Car {
    public $brand;

    public function __construct($brand)
    {
        $this->brand = $brand; 
        echo $this->brand. " is alive <br>";
    }

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