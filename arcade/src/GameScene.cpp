#include "GameScene.h"
#include <ArcadeCore.h>
#include <string>
#include <iostream>

GameScene::GameScene(Core::Application * const application)
	: m_application(application)
	, m_Painter(application->GetPainter())
{

}

GameScene::~GameScene()
{
}

void GameScene::Init()
{
	
}

void GameScene::Shutdown()
{
}

void GameScene::Update(float timeDelta)
{
	Vector2 mousePos = m_application->GetMousePosition();
	const Uint8* keystates = m_application->GetKeyboardState(nullptr);
	//std::cout << "mouse X ::"<<mousePos.X << ",mouse Y :: "<<mousePos.Y<<std::endl;

	if (keystates[SDL_SCANCODE_RIGHT] || keystates[SDL_SCANCODE_D])
	{
		
	}
	if (keystates[SDL_SCANCODE_LEFT] || keystates[SDL_SCANCODE_A])
	{
		
	}
	if (keystates[SDL_SCANCODE_UP] || keystates[SDL_SCANCODE_W])
	{
		
	}
	if (keystates[SDL_SCANCODE_DOWN] || keystates[SDL_SCANCODE_S])
	{
		
	}		
}

void GameScene::Draw()
{
	using Color = Core::Color;
	m_Painter.ClearColor(Color::BLACK);
}

