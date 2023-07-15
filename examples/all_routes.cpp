#include <iostream>
#include "../magnetar-core/neody/neocore.h"

int main()
{
     
    Router tasty;
    tasty.setPort(8080);
    
    // auto res = tasty.oneTrigger();
    // std::cout << res << std::endl;



    tasty.post("/post",{[](Query &control){

        auto params = control.body.getParams();
        control.json(params[0].value);
    }});

    
   tasty.put("/put",{[](Query &control){

        auto params = control.body.getParams();
        control.json(params[0].value);
    }});


    tasty.get("/put",{[](Query &control){

        auto params = control.body.getParams();
        control.json(params[0].value);
    }});



    tasty.deleteX("/delete",{[](Query &control){

        auto params = control.body.getParams();
        control.json(params[0].value);
    }});


    tasty.patch("/patch",{[](Query &control){

        auto params = control.body.getParams();
        control.json(params[0].value);
    }});
    



    tasty.head("/head",{[](Query &control){

        auto params = control.body.getParams();
        control.json(params[0].value);
    }});



    tasty.options("/options",{[](Query &control){

        auto params = control.body.getParams();
        control.json(params[0].value);
    }});


    tasty.link("/link",{[](Query &control){

        auto params = control.body.getParams();
        control.json(params[0].value);
    }});

    
    tasty.unlink("/unlink",{[](Query &control){

        auto params = control.body.getParams();
        control.json(params[0].value);
    }});


    tasty.purge("/purgue",{[](Query &control){

        auto params = control.body.getParams();
        control.json(params[0].value);
    }});


     tasty.listen();

    return 0;
}
