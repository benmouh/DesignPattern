/* 
 * File:   Tablette.hpp
 * Author: lhoussaine
 *
 * Created on 5 mai 2014, 17:15
 */

#ifndef TABLETTE_HPP
#define	TABLETTE_HPP
#include <string>
#include <iostream>
#include "Mobile.hpp"

using namespace std;


class Tablette: public Mobile {
public:
    Tablette();
    Tablette(const Tablette& orig);
    string Camera();
    string Ecran();
    virtual ~Tablette();
private:

};

#endif	/* TABLETTE_HPP */

