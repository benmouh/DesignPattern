/* 
 * File:   CompteNormal.hpp
 * Author: lhoussaine
 *
 * Created on 6 mai 2014, 16:57
 */

#ifndef COMPTENORMAL_HPP
#define	COMPTENORMAL_HPP
#include "Compte.hpp"

class CompteNormal:public Compte {
public:
    
    CompteNormal();
    void Start();
    void Allow();
    void End();
    double MaxLimit();
    
    CompteNormal(const CompteNormal& orig);
    virtual ~CompteNormal();
private:

};

#endif	/* COMPTENORMAL_HPP */

