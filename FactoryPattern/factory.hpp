/* 
 * File:   factory.hpp
 * Author: lhoussaine
 *
 * Created on 5 mai 2014, 12:03
 */

#ifndef FACTORY_HPP
#define	FACTORY_HPP
#include <string>
#include <iostream>

using namespace std;

// Abstract base class that gives two services 

class Mobile {
public:
    virtual string Camera() = 0;
    virtual string Ecran() = 0;

    void PrintSpecs() {
        cout << Camera() << endl;
        cout << Ecran() << endl;
    }
};

// Concrete classes representing a mobile phone

class Phone : public Mobile {
public:

    string Camera() {
        return "Phone camera: 2 px";
    }

    string Ecran() {
        return "Phone screen : résolution 60x80px";
    }
};

// Concrete classes representing a mobile tablette

class Tablette : public Mobile {
public:

    string Camera() {
        return "Tablette camera: 12 px";
    }

    string Ecran() {
        return "Tablette screen: résolution 600x800px";
    }
};


// Abstract Factory returning an instance of a mobile

class MobileFactory {
public:
    Mobile* GetMobile(string type);
};

#endif	/* FACTORY_HPP */

