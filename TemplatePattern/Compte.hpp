/* 
 * File:   Compte.hpp
 * Author: lhoussaine
 *
 * Created on 6 mai 2014, 16:46
 */

#ifndef COMPTE_HPP
#define	COMPTE_HPP

class Compte {
public:
    
    Compte();
    virtual void Start() = 0;
    virtual void Allow() = 0;
    virtual void End() = 0;
    virtual double MaxLimit() = 0;
    
    //this a template method
    void Retirer(double montant);
    Compte(const Compte& orig);
    virtual ~Compte();
private:

};

#endif	/* COMPTE_HPP */

