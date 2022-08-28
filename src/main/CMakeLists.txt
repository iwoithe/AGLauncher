add_executable(aglauncher
    ${CMAKE_CURRENT_LIST_DIR}/main.cpp
)

target_link_libraries(aglauncher PRIVATE
    ${QT_LIBRARIES}
    actions
    appshell
    hub
    interactive
    launch
    ui
    uicomponents
)
