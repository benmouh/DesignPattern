/* 
 * File:   GprsTest.cpp
 * Author: lhoussaine
 *
 * Created on 6 mai 2014, 11:45:23
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
        std::cout << "%TEST_FAILED% time=0 testname=testConnect (GprsTest) message=error message sample" << std::endl;
    }
}

void testIsAvailable() {
    Gprs gprs;
    bool result = gprs.isAvailable();
    if (result == true/*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testIsAvailable (GprsTest) message=error message sample" << std::endl;
    }
}

void testSend() {
    string trx;
    Gprs gprs;
    gprs.send(trx);
    if (true  /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSend (GprsTest) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% GprsTest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testConnect (GprsTest)" << std::endl;
    testConnect();
    std::cout << "%TEST_FINISHED% time=0 testConnect (GprsTest)" << std::endl;

    std::cout << "%TEST_STARTED% testIsAvailable (GprsTest)" << std::endl;
    testIsAvailable();
    std::cout << "%TEST_FINISHED% time=0 testIsAvailable (GprsTest)" << std::endl;

    std::cout << "%TEST_STARTED% testSend (GprsTest)" << std::endl;
    testSend();
    std::cout << "%TEST_FINISHED% time=0 testSend (GprsTest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

