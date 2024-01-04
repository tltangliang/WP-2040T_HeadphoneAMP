cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(wp-dlc C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(wp-dlc)

pico_generate_pio_header(wp-dlc 
    ${CMAKE_CURRENT_LIST_DIR}/Lighting/neopixel.pio)

target_sources(wp-dlc PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/wp-dlc.c
    ${CMAKE_CURRENT_LIST_DIR}/usb_descriptors.c
    ${CMAKE_CURRENT_LIST_DIR}/Lighting/Neopixel.c
    ${CMAKE_CURRENT_LIST_DIR}/Lighting/LampArray.c
    )

target_include_directories(wp-dlc PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
    )

target_link_libraries(wp-dlc PUBLIC
    pico_stdlib
    pico_multicore
    hardware_pio
    tinyusb_device
    tinyusb_board
    )

pico_add_extra_outputs(wp-dlc)
pico_enable_stdio_usb(wp-dlc 1)
