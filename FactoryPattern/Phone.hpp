/* 
 * File:   Phone.hpp
 * Author: lhoussaine
 *
 * Created on 5 mai 2014, 17:11
 */

#ifndef PHONE_HPP
#define	PHONE_HPP
#include <string>
#include <iostream>
#include "Mobile.hpp"

using namespace std;

class Phone: public Mobile {
public:
    Phone();
    Phone(const Phone& orig);
    string Camera();
    string Ecran();
    virtual ~Phone();
private:

};

#endif	/* PHONE_HPP */

