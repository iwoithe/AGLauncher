set(MODULE_NAME launch)

set(MODULE_SRC
    ${CMAKE_CURRENT_LIST_DIR}/stores/launchactionsstore.cpp
    ${CMAKE_CURRENT_LIST_DIR}/stores/launchactionsstore.h
    ${CMAKE_CURRENT_LIST_DIR}/launchmodule.cpp
    ${CMAKE_CURRENT_LIST_DIR}/launchmodule.h
)

set(MODULE_LINK
    actions
    global
    interactive
    uicomponents
)

include(${PROJECT_SOURCE_DIR}/build/module.cmake)
