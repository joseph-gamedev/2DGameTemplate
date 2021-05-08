#pragma once

#include <ArcadeCore.h>
#include <memory>

class GameScene;

const char* APP_TITLE = "Asteroids";
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const Core::Color CLEAR_COLOR = Core::Color{ 255,255,255,255 };

class GameApp : public Core::Application
{
	public:
		GameApp(const Core::AppData& data);

		virtual void Load() override;

		virtual void OnLoadComplete() override;

		virtual void Start() override;

		virtual void Stop() override;

		virtual void PostUpdate(float deltaTime) override;

		virtual void Update(float timeDelta) override;

		virtual void Draw() override;

	private:

		std::unique_ptr<GameScene> m_scene;
};

std::unique_ptr<Core::Application> CreateApplication()
{
	return std::make_unique<GameApp>(Core::AppData{ APP_TITLE, SCREEN_WIDTH, SCREEN_HEIGHT, CLEAR_COLOR });
}

