#ifndef AG_ACTIONS_DISPATCHER_H
#define AG_ACTIONS_DISPATCHER_H

#include "internal/dispatcher.h"

using namespace ag::actions;

static Dispatcher* dispatcher()
{
    return Dispatcher::instance();
}

#endif
