// #include "MyCall.hpp"

// void MyCall::onCallState(pj::OnCallStateParam &prm)
// {
//     pj::CallInfo ci = getInfo();
//     if (ci.state == PJSIP_INV_STATE_DISCONNECTED) {
//         delete this;
//     }
// }

// void MyCall::onCallMediaState(pj::OnCallMediaStateParam &prm)
// {
//     pj::CallInfo ci = getInfo();
//     // Iterate all the call medias
//     for (unsigned i = 0; i < ci.media.size(); i++) {
//         if (ci.media[i].type==PJMEDIA_TYPE_AUDIO && getMedia(i)) {
//             pj::AudioMedia *aud_med = (pj::AudioMedia *)getMedia(i);

//             // Connect the call audio media to sound device
//             pj::AudDevManager& mgr = pj::Endpoint::instance().audDevManager();
//             aud_med->startTransmit(mgr.getPlaybackDevMedia());
//             mgr.getCaptureDevMedia().startTransmit(*aud_med);
//         }
//     }
// }