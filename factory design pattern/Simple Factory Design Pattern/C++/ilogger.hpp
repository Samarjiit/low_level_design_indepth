#pragma once // make sure that entire file is included only once 
#include "common.hpp"

class ILogger {
    public:
        virtual void log(const string& msg) = 0; //act as interface . everylogger has to use this function
        virtual ~ILogger() {}
};