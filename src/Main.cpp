#include <pjsua2.hpp>
#include<iostream>

void initLib(){
    pj::Endpoint *ep = new pj::Endpoint;
    ep->libCreate();
    pj::EpConfig ep_cfg;
    ep->libInit(ep_cfg);
}

int main()
{
    initLib();
    std::cout <<"Hello";
    return 0;
}