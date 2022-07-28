#include <iostream>
#include "../magnetar/core.hpp"

int main(int argc, char const *argv[])
{
     
    Magnetar<Server> tasty;
    tasty.setPort(8080);

 tasty.get("/index",{ [&](Query &control) {
    
           return control.readFile("./doc/index.html", "text/html");
     }
});


    tasty.listen();


    return 0;
}
