#include <iostream>
#ifndef BLACKLIST_H_INCLUDED
#define BLACKLIST_H_INCLUDED
void rid(std::string rids);
void mac(std::string macs);
void ip(std::string ips);
bool check(std::string rid, std::string ip, std::string mac);
#endif // BLACKLIST_H_INCLUDED
