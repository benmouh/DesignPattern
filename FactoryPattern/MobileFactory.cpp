/* 
 * File:   MobileFactory.cpp
 * Author: lhoussaine
 * 
 * Created on 5 mai 2014, 17:26
 */

#include "MobileFactory.hpp"
#include "Phone.hpp"
#include "Tablette.hpp"

MobileFactory::MobileFactory() {
}

MobileFactory::MobileFactory(const MobileFactory& orig) {
}
Mobile* MobileFactory::GetMobile(string type){
    
    if (type == "Phone") return new Phone();
    
    if (type == "Tablette") return new Tablette();
    
    return NULL;
}

MobileFactory::~MobileFactory() {
}

