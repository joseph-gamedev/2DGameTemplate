set(HEADER_FILES
	include/GameApp.h
	include/GameConstants.h
	include/GameObject.h
	include/GameScene.h
	)

set(SOURCE_FILES	
	src/GameObject.cpp
	src/GameScene.cpp
	src/GameApp.cpp)

set(EXTERNAL ${CMAKE_SOURCE_DIR}/extern)

set(SDL_LIBPATH ${EXTERNAL}/libsdl2/lib/x64)
set(SDL2TTF_LIBPATH ${EXTERNAL}/sdl2ttf/lib/x64)
set(NANOGUI_LIBPATH ${EXTERNAL}/nanogui/lib/x64)

add_executable(arcade ${SOURCE_FILES} ${HEADER_FILES})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/core/include)

target_precompile_headers(arcade PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/Arcade.h)

target_link_libraries(arcade PUBLIC ${SDL_LIBPATH}/SDL2.lib
									${SDL2TTF_LIBPATH}/SDL2_ttf.lib
									core imgui)


	