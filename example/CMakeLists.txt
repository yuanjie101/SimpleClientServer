include_directories(
        ${CURRENT_PROJECT_DIR}/inc
)

add_executable(client_example
        client_example.cpp)

target_link_libraries(client_example
        ${SIMPLE_LIB_NAME}
        )

add_executable(server_example
        server_example.cpp)

target_link_libraries(server_example
        ${SIMPLE_LIB_NAME}
        )

add_executable(client_server_example
        client_server_example.cpp)

# FIND_PACKAGE(Threads)

target_link_libraries(client_server_example
        ${SIMPLE_LIB_NAME}
        )