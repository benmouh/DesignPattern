/* 
 * File:   Wifi.hpp
 * Author: lhoussaine
 *
 * Created on 6 mai 2014, 10:41
 */

#ifndef BLUETOOTH_HPP
#define	BLUETOOTH_HPP
#include <iostream>
using namespace std;

class Wifi {
public:
    Wifi();
    bool isAvailable();
    void connect();
    void authenticate();
    void send(string trx);
    Wifi(const Wifi& orig);
    virtual ~Wifi();
private:

};

#endif	/* BLUETOOTH_HPP */

