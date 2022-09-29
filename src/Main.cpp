#include <pjsua2.hpp>
#include<iostream>

void initLib(){
    pj::Endpoint ep;
    ep.libCreate();
    pj::EpConfig ep_cfg;
    ep.libInit(ep_cfg);
}

int main()
{
    initLib();
    return 0;
}