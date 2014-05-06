/* 
 * File:   ComptePrivilged.hpp
 * Author: lhoussaine
 *
 * Created on 6 mai 2014, 17:06
 */

#ifndef COMPTEPRIVILGED_HPP
#define	COMPTEPRIVILGED_HPP
#include "Compte.hpp"

class ComptePrivilged:public Compte {
public:
    ComptePrivilged();
    void Start();
    void Allow();
    void End();
    double MaxLimit();
    ComptePrivilged(const ComptePrivilged& orig);
    virtual ~ComptePrivilged();
private:

};

#endif	/* COMPTEPRIVILGED_HPP */

