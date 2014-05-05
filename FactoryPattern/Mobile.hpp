/* 
 * File:   Mobile.hpp
 * Author: lhoussaine
 *
 * Created on 5 mai 2014, 16:55
 */

#ifndef MOBILE_HPP
#define	MOBILE_HPP
#include <string>
#include <iostream>
using namespace std;

class Mobile {
public:
    
    Mobile();
    Mobile(const Mobile& orig);
    virtual string Camera() = 0;
    virtual string Ecran() = 0;
    void PrintSpecs();
    virtual ~Mobile();
    
private:

};

#endif	/* MOBILE_HPP */

