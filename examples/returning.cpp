#include <iostream>
#include "../magnetar/core.hpp"

int main()
{
     


    Magnetar<Server> tasty;
    tasty.setPort(8080);


    // type void!
    tasty.get("/my_route",{
    [](Query &control) {

    auto params = control.body.getParams();

    if(params.exist("id"))    return control.send(params.get("id").value    );
    if(params.exist("param")) return control.send(params.get("param").value);
    if(params.exist("other")) return control.send(params.get("other").value);  
    if(params.exist("xd"))    return control.send(params.get("xd").value    );

    control.html("<h1>error!<h1/>", 400);

    }
});


    tasty.listen();
    return 0;
}
