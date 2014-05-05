/* 
 * File:   MobileFactory.hpp
 * Author: lhoussaine
 *
 * Created on 5 mai 2014, 17:26
 */

#ifndef MOBILEFACTORY_HPP
#define	MOBILEFACTORY_HPP
#include "Mobile.hpp"

class MobileFactory {
public:
    MobileFactory();
    MobileFactory(const MobileFactory& orig);
    Mobile* GetMobile(string type);
    virtual ~MobileFactory();
private:

};

#endif	/* MOBILEFACTORY_HPP */

