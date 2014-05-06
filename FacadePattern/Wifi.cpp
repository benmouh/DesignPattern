/* 
 * File:   Bluetooth.cpp
 * Author: lhoussaine
 * 
 * Created on 6 mai 2014, 10:41
 */

#include "Wifi.hpp"

Wifi::Wifi() {
}

bool Wifi::isAvailable()
{
        return true;
}

void Wifi::connect()
{
        cout << "Connecting via Wifi ..." << endl;
}

void Wifi::authenticate()
{
       cout << "Authenticating user ..." << endl;
}

void Wifi::send(string file)
{
       cout << file << " sent via Wifi." << endl;
}

Wifi::Wifi(const Wifi& orig) {
}

Wifi::~Wifi() {
}

