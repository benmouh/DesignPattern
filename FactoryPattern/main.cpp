/* 
 * File:   main.cpp
 * Author: lhoussaine
 *
 * Created on 29 avril 2014, 16:45
 */

#include <cstdlib>
#include "factory.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    MobileFactory* myFactory = new MobileFactory();

    Mobile* myPhone = myFactory->GetMobile("Phone");
    myPhone->PrintSpecs();

    Mobile* myTablette = myFactory->GetMobile("Tablette");
    myTablette->PrintSpecs();

    delete myFactory;
    delete myPhone;
    delete myTablette;
    return 0;
}

