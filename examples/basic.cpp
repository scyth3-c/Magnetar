#include <iostream>
#include "../magnetar-core/neody/neocore.h"

int main()
{
     
    Router tasty;
    tasty.setPort(8080);

    string my_message = "Hello World";

    tasty.get("/verify",{ [&](Query &control) {

        control.send(my_message);
    }
});


    tasty.listen();


    return 0;
}
