#ifndef AG_ACTIONS_ISTORE_H
#define AG_ACTIONS_ISTORE_H

namespace ag::actions
{
class IStore
{
public:
    // TODO: Is there a better way instead of typing the following in every subclass?
    IStore()
    {
        init();
    }
    virtual ~IStore() {}
    virtual void init() {}
};
} // namespace ag::actions

#endif
