#include "blacklist.h"
#include <iostream>
#include <fstream>
using namespace std;
void rid(std::string rids)
{
    ofstream write("rid.txt", ios::app);
    write << rids << endl;
    write.close();
}
void ip(std::string ips)
{
    ofstream write("ip.txt", ios::app);
    write << ips << endl;
    write.close();
}
void mac(std::string macs)
{
    ofstream write("mac.txt", ios::app);
    write << macs << endl;
    write.close();
}
bool check(std::string rid, std::string ip, std::string mac)
{
    ifstream checkRid("rid.txt");
    while(!checkRid.eof())
    {
        string data = "";
        checkRid >> data;
        if(data == rid)
        {
            cout << "The Rid Is A Blacklisted Rid" << endl;
            return true;
        }
    }
    checkRid.close();
    ifstream checkMac("mac.txt");
    while(!checkMac.eof())
    {
        string data = "";
        checkMac >> data;
        if(data == mac)
        {
            cout << "The Mac Is A Blacklisted Mac" << endl;
            return true;
        }
    }
    checkMac.close();
    ifstream checkIp("ip.txt");
    while(!checkIp.eof())
    {
        string data = "";
        checkIp >> data;
        if(data == ip)
        {
            cout << "The Ip Is A Blacklisted Ip" << endl;
            return true;
        }
    }
    checkIp.close();
    return false;
}
