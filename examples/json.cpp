#include <iostream>
#include "../magnetar/core.hpp"

int main(int argc, char const *argv[])
{


    /*
     * 
     *              YES, I SHOULD REWRITE JSON SYSTEM  
     *              BECAUSE, IS SLOW!!
     *              REMNBER, THIS IS A DEMO!!
     * 
     * 
     * 
     */

     
    Magnetar<Server> tasty;
    tasty.setPort(8080);
     tasty.get("/json",{ [&](Query &control) {

        JSON id = {
            "id", "54",
            "token", "asd"
        };
        JSON kevin = {
            "name", "kevin",
            "lastname", "bohorquez",
            "age", "19",
            "id", id()
        };
        JSON dev = {
            "ficha", "123",
            "lang",  "c++",
            "dev", kevin()
        };
        
        control.json(dev());
    }
    /*

{
    "ficha": "123",
    "lang": "c++",
    "dev": {
        "name": "kevin",
        "lastname": "bohorquez",
        "age": "19",
        "id": {
            "id": "54",
            "token": "asd"
        } 
    } 
}

    */

});

    // json raw
    tasty.get("/json2",{ [&](Query &control) {

        control.json("{ \"data\": 2 }");
    }
});



    tasty.listen();


    return 0;
}
