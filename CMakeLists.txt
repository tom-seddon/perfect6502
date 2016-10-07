cmake_minimum_required(VERSION 3.5)

set(SRCS
  perfect6502.c perfect6502.h
  netlist_sim.c netlist_sim.h)

set(CBMBASIC_SRCS
  cbmbasic.c
  runtime.c runtime.h
  runtime_init.c runtime_init.h
  plugin.c plugin.h
  console.c console.h
  emu.c)

if(MSVC)
  set(CBMBASIC_SRCS
    ${CBMBASIC_SRCS}
    readdir.h readdir.c)
endif()

add_executable(perfect6502_cbmbasic ${SRCS} ${CBMBASIC_SRCS})

if(MSVC)
  target_compile_definitions(perfect6502_cbmbasic
    PRIVATE -D_CRT_SECURE_NO_WARNINGS -D_CRT_NONSTDC_NO_DEPRECATE
    )
endif()

add_custom_command(TARGET perfect6502_cbmbasic POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_LIST_DIR}/cbmbasic.bin .
  VERBATIM)
