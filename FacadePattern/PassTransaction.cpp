/* 
 * File:   PassTransaction.cpp
 * Author: lhoussaine
 * 
 * Created on 6 mai 2014, 10:54
 */

#include "PassTransaction.hpp"
#include "Wifi.hpp"
#include "Gprs.hpp"
using namespace std;

PassTransaction::PassTransaction() {
}
void PassTransaction::ExecuteTrx(string typeTrx){
    
    Gprs* g = new Gprs();
        Wifi* w = new Wifi();
        if ( g->isAvailable() )
        {
            g->connect();
            g->send(typeTrx);
        }
        else if ( w->isAvailable() )
        {
            w->connect();
            w->authenticate();
            w->send(typeTrx);
        }
        else
        {
            cout << "Not sent" << endl;
        }
        delete g;
        delete w;
    
}
PassTransaction::PassTransaction(const PassTransaction& orig) {
}

PassTransaction::~PassTransaction() {
}

