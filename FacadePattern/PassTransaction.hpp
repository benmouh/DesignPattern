/* 
 * File:   PassTransaction.hpp
 * Author: lhoussaine
 *
 * Created on 6 mai 2014, 10:54
 */

#ifndef PASSTRANSACTION_HPP
#define	PASSTRANSACTION_HPP
#include <iostream>
using namespace std;

class PassTransaction {
public:
    PassTransaction();
    void ExecuteTrx(string typeTrx);
    PassTransaction(const PassTransaction& orig);
    virtual ~PassTransaction();
private:

};

#endif	/* PASSTRANSACTION_HPP */

