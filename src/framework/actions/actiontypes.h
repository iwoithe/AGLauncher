#ifndef AG_ACTIONS_ACTIONTYPES_H
#define AG_ACTIONS_ACTIONTYPES_H

#include <QVariantMap>
#include <string>

namespace ag::actions
{
using ActionCode = std::string;
using ActionData = QVariantMap;
using Method = std::function<void()>;
using MethodWithData = std::function<void(QVariantMap)>;
} // namespace ag::actions

#endif
