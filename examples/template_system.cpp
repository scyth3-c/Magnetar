#include "../magnetar-core/core.hpp"


int main() {

    Magnetar<Server>  tasty;

    tasty.setPort(8080);

    tasty.get("/", { [&](Query &control) {

        int num_modules = 2;
        control.compose("./views/compose/main.html", num_modules);

    }}); 


    tasty.listen();



}