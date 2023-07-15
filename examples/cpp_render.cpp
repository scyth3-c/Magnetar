#include <iostream>
#include "../magnetar-core/neody/neocore.h"

int main(int argc, char const *argv[])
{
     
    Router tasty;
    tasty.setPort(8080);

     tasty.get("/index",{ [&](Query &control) {
    
           return control.readFileX("./views/cpp.html", "text/html");
     }
    });

    tasty.listen();


    return 0;
}
