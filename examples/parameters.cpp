#include <iostream>
#include "../magnetar-core/core.hpp"

int main()
{
     
    Magnetar<Server> tasty;
    tasty.setPort(8080);


    tasty.get("/my_route",{[&](Query &control) {
    
        auto params = control.body.getParams();        
        if(!params.exist("id")) control.send("error id not defined");

        string id_name = params[0].name;
        string id_name2  = params.get("id").name;

        int total_paramters = control.body.total_params();
        control.send(id_name + id_name2 + std::to_string(total_paramters));

        // route:  /tasty?id=10
        // output:  id id 2

    }
});


    tasty.listen();


    return 0;
}
