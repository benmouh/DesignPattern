/* 
 * File:   FacadeTest.cpp
 * Author: lhoussaine
 *
 * Created on 6 mai 2014, 11:44:11
 */

#include <stdlib.h>
#include <iostream>
#include "Gprs.hpp"

/*
 * Simple C++ Test Suite
 */

void testConnect() {
    Gprs gprs;
    gprs.connect();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testConnect (FacadeTest) message=error message sample" << std::endl;
    }
}

void testIsAvailable() {
    Gprs gprs;
    bool result = gprs.isAvailable();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testIsAvailable (FacadeTest) message=error message sample" << std::endl;
    }
}

void testSend() {
    string trx;
    Gprs gprs;
    gprs.send(trx);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSend (FacadeTest) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% FacadeTest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testConnect (FacadeTest)" << std::endl;
    testConnect();
    std::cout << "%TEST_FINISHED% time=0 testConnect (FacadeTest)" << std::endl;

    std::cout << "%TEST_STARTED% testIsAvailable (FacadeTest)" << std::endl;
    testIsAvailable();
    std::cout << "%TEST_FINISHED% time=0 testIsAvailable (FacadeTest)" << std::endl;

    std::cout << "%TEST_STARTED% testSend (FacadeTest)" << std::endl;
    testSend();
    std::cout << "%TEST_FINISHED% time=0 testSend (FacadeTest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

