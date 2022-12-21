// #include"MyAccount.hpp"

// void MyAccount::onRegisterState(pj::OnRegStateParam &prm)
// {
//     pj::AccountRegConfig agc;
//     pj::AccountInfo ai = getInfo();
//     std::cout << (ai.regIsActive? "*** Register: code=" : "*** Unregister: code=")
//             << prm.code << std::endl;
// }

// void MyAccount::onIncomingCall(pj::OnIncomingCallParam &iprm)
// {
//     pj::AccountInfo ai = getInfo();
//     pj::Call *call = new MyCall(*this, iprm.callId);

//     pj::CallOpParam op;
//     // Just answer for now
//     op.statusCode = PJSIP_SC_OK;
//     call->answer(op);
// }