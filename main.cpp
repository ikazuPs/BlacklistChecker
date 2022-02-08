#include <iostream>
#include "blacklist.h"
using namespace std;
struct PlayerInfo{
    string mac = "02.ee.12301";
    string ip = "127.0.0.1";
    string rid = "12.3e.12o.f.123";
};
int main()
{
    /*
    story:
    someone is hacking then u ban him or u ban someone
    or the anticheat system caught someone
    u execute function
    */
    PlayerInfo pData;
    rid(pData.rid);
    mac(pData.mac);
    ip(pData.ip);
    /*
    then that person tries to log again using a vpn or something and then u check
    */
    //std::string rid, std::string ip, std::string mac
    bool isBlacklisted = check(pData.rid, pData.ip, pData.mac);
    /*
    then if it return true u do something here like
    */
    if(isBlacklisted == true)
    {
        cout << "U Are Blocked From The Server" << endl;
    }

    return 0;
}
