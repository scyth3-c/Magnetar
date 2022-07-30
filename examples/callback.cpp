#include <iostream>
#include "../magnetar/core.hpp"

int main()
{
    Magnetar<Server> tasty;
    tasty.setPort(8080);
    string unscoped_info = "123";


   tasty.get("/route",{[&](Query &control){

    auto params = control.body.getParams(); 
    if(params.get("data").value == unscoped_info) {

        control.json(unscoped_info,[&](){
            unscoped_info = "other value";
        });
        
    } else {


        control.json("error", 400, [&](){
            unscoped_info = "error";
        });
    }

    }});


    tasty.listen();


    return 0;
}
