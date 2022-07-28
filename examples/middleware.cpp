#include <iostream>
#include "../magnetar/core.hpp"

int main(int argc, char const *argv[])
{
     
    Magnetar<Server> tasty;
    tasty.setPort(8080);

    std::string auth_id = "123";
    std::string secret = "my secret!";

    tasty.get("/my_route",{
    [&](Query &control) {
        
                
        Param_t params = control.body.getParams();
        auto id = params.get("id");

        if(id.value == auth_id) {
            control.next();
        }else {
            control.send("error");
        }
        

    },
    [&](Query &control) {
        control.send("my secret!");
    }
});


    tasty.listen();


    return 0;
}
