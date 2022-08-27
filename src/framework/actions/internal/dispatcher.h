#ifndef AG_ACTIONS_INTERNAL_DISPATCHER_H
#define AG_ACTIONS_INTERNAL_DISPATCHER_H

#include <QVariantMap>

#include "../idispatcher.h"

namespace ag::actions
{
class Dispatcher : public IDispatcher
{
public:
    static Dispatcher* instance();
    void dispatch(std::string actionCode, QVariantMap actionData) override;
    void reg(IStore* client, const std::string& actionCode, const MethodWithData& callback) override;
private:
    // TODO: Avoid using Qt classes here
    using Callbacks = std::map<std::string, MethodWithData>;
    using Clients = std::map<IStore*, Callbacks>;
    std::map<std::string, Clients> m_clients;
};
}

#endif
