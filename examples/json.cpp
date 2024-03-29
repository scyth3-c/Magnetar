#include <iostream>
#include "../magnetar-core/neody/neocore.h"

int main()
{
     
    Router tasty;
    tasty.setPort(8080);
     tasty.get("/json",{ [&](Query &control) {

        JSON_s id = {
            "id", "54",
            "token", "asd"
        },
          
        kevin = {
            "name", "kevin",
            "lastname", "bohorquez",
            "age", "19",
            "id", id()
        },
          
        dev = {
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
