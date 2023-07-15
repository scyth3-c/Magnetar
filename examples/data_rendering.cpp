#include <iostream>
#include "../magnetar-core/neody/neocore.h"

int main()
{
     
    Router tasty;
    tasty.setPort(8080);

    tasty.get("/",{ [&](Query &control) {

        control.render("./views/parse_data.html",[&](dataRender &Data){

                Data("name", "kevin");
                Data("age", "19");


            return Data;
        });
    }


});


    tasty.listen();


    return 0;
}
