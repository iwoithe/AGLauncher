set(MODULE_NAME hub)

set(MODULE_SRC
    ${CMAKE_CURRENT_LIST_DIR}/hubmodule.cpp
    ${CMAKE_CURRENT_LIST_DIR}/hubmodule.h
)

set(MODULE_QRC
    ${CMAKE_CURRENT_LIST_DIR}/hub.qrc
)

set(MODULE_LINK
    actions
    global
    interactive
    uicomponents
)

include(${PROJECT_SOURCE_DIR}/build/module.cmake)
