#include <iostream>
#include "../magnetar-core/neody/neocore.h"

int main()
{
     
    Router tasty;
    tasty.setPort(8080);

 tasty.get("/index",{ [&](Query &control) {
    
           return control.readFile("./doc/index.html", "text/html");
     }
});


    tasty.listen();


    return 0;
}
