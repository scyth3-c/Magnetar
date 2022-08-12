#include <iostream>
#include "../magnetar-core/core.hpp"

int main(int argc, char const *argv[])
{
     
    Magnetar<Server> tasty;
    tasty.setPort(8080);

     tasty.get("/index",{ [&](Query &control) {
    
           return control.readFileX("./views/cpp.html", "text/html");
     }
    });

    tasty.listen();


    return 0;
}
