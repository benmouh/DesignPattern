/* 
 * File:   Wifi.cpp
 * Author: lhoussaine
 * 
 * Created on 6 mai 2014, 10:41
 */

#include "Wifi.hpp"

Wifi::Wifi() {
}

bool Wifi::isAvailable()
{
        return false;
}

int Wifi::connect()
{
        cout << "Connecting via Wifi ..." << endl;
        
        return 0;
}

int Wifi::authenticate()
{
       cout << "Authenticating user ..." << endl;
       
       return 0;
}

int Wifi::send(string file)
{
       cout << file << " sent via Wifi." << endl;
       
       return 0;
}

Wifi::Wifi(const Wifi& orig) {
}

Wifi::~Wifi() {
}

