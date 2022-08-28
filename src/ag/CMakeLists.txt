set(MODULE_NAME ag)

set(MODULE_SRC
    ${CMAKE_CURRENT_LIST_DIR}/agmodule.cpp
    ${CMAKE_CURRENT_LIST_DIR}/agmodule.h
)

set(MODULE_QRC
    ${CMAKE_CURRENT_LIST_DIR}/ag.qrc
)

set(MODULE_LINK
    actions
    global
    interactive
    uicomponents
)

include(${PROJECT_SOURCE_DIR}/build/module.cmake)
