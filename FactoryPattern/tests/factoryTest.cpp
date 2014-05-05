/* 
 * File:   factoryTest.cpp
 * Author: lhoussaine
 *
 * Created on 5 mai 2014, 15:14:48
 */

#include <stdlib.h>
#include <iostream>
#include "factory.hpp"

/*
 * Simple C++ Test Suite
 */

void testCamera() {
    Tablette tablette;
    string result = tablette.Camera();
    if (result == "2 pxtrue" /*check result*/) {
        std::cout << "Test passed" << std::endl;
    }
}

void testEcran() {
    Tablette tablette;
    string result = tablette.Ecran();
    if (result == "résolution 60x80px" /*check result*/) {
        std::cout << "Test passed" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% factoryTest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testCamera (factoryTest)" << std::endl;
    testCamera();
    std::cout << "%TEST_FINISHED% time=0 testCamera (factoryTest)" << std::endl;

    std::cout << "%TEST_STARTED% testEcran (factoryTest)" << std::endl;
    testEcran();
    std::cout << "%TEST_FINISHED% time=0 testEcran (factoryTest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

