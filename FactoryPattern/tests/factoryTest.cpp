/* 
 * File:   factoryTest.cpp
 * Author: lhoussaine
 * Email: aitbenmouh@yahoo.fr
 *
 * Created on 5 mai 2014, 15:14:48
 * * * This file is part of DesignPattern.

    DesignPattern is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License.

    DesignPattern is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with DesignPattern.  If not, see <http://www.gnu.org/licenses/>
 *
 */

#include <stdlib.h>
#include <iostream>
#include "Tablette.hpp"


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

