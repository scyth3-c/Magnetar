#include <iostream>
#include "../magnetar-core/neody/neocore.h"

int main()
{
    Router tasty;
    tasty.setPort(8080);

    int unscope = 2;

   tasty.get("/route",{
    [&](Query &control){

        if(control.body.total_params() < unscope) {
            control.send("incomplete parameters!!", 400);
        } else{
            control.next();
        }          

    },
    [](Query &control){

        auto params = control.body.getParams();
        if(!params.exist("id")) return control.send("id not defined");

            control.json( params.get("id").value ,[&]()->void {
                // sender callback
                params.clear();
            });
    }
   });




    tasty.listen();


    return 0;
}
