#include "game.pb.h"
#include <iostream>
#include <string>
//#include "game.pb.h"

int main()
{
    pt::rsp_login rsp{};
    rsp.set_ret(pt::rsp_login_RET_SUCCESS);
    cout << rsp.get_ret(); 
}
    
