#include "GameApp.h"
#include "GameScene.h"

GameApp::GameApp(const Core::AppData & data)
	: Application(data)
{
	m_scene = std::make_unique<GameScene>(this);
}

void GameApp::Load()
{
}

void GameApp::OnLoadComplete()
{
}

void GameApp::Start()
{
	m_scene->Init();
}

void GameApp::Stop()
{
	m_scene->Shutdown();
}

void GameApp::PostUpdate(float deltaTime)
{
	
}

void GameApp::Update(float timeDelta)
{
	m_scene->Update(timeDelta);
}

void GameApp::Draw()
{
	m_scene->Draw();
}
