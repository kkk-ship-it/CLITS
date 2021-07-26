/**
 * session
 */

#ifndef SESSIONHANDLER_SUBJECT_HPP
#define SESSIONHANDLER_SUBJECT_HPP

#include <iostream>
#include <string>
#include <vector>
#include "SessionObserver.hpp"

using namespace std;

class SessionHandler
{
public:
        virtual void registerObserver(SessionObserver *observer) = 0;

        virtual void removeObserver(SessionObserver *observer) = 0;

        virtual void notifyObservers() = 0;




};


#endif 
