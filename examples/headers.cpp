#include <iostream>
#include "../magnetar-core/neody/neocore.h"

int main()
{
     
   Router tasty;
    tasty.setPort(8080);


    tasty.get("/headers",{ [&](Query &control) {

        HEADERS my_headers = {
            "header-1: value",
            "header-2: value",
            "header-3: value",
            "header-N: value"
        };
        control.setHeaders(my_headers);
        control.json("{Hello World}");
    }
});


    tasty.get("/headers2", {[](Query &control){
            control.setHeaders("header-1: value");
            control.json("{hello world}");
        }
    });


    tasty.listen();


    return 0;
}
