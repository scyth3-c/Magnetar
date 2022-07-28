#include <iostream>
#include "../magnetar/core.hpp"

int main(int argc, char const *argv[])
{
     
    Magnetar<Server> tasty;
    tasty.setPort(8080);



    tasty.post("/post",{[](Query &control){

        auto params = control.body.getParams();
        control.json(params[0].value);
    }});


     tasty.put("/put",{[](Query &control){

        auto params = control.body.getParams();
        control.json(params[0].value);
    }});
     tasty.listen();




    return 0;
}
