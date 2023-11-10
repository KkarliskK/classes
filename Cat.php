<?php

class Cat{
    public $name;
    private $age = 0;

    function set_name($name){
        $this->name = $name;
        echo "Cat's name: ". $this->name ."<br>";
    }

    function birthday(){
        $this->age++;
    }
}

?>