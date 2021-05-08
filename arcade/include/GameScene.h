#pragma once 

#include <NonCopyable.h>
#include <memory>
#include "GameObject.h"


namespace Core
{
	class Application;
	class IPainter;
}

class GameScene : public Core::NonCopyable 
{
	public:

		GameScene(Core::Application* const application);
		~GameScene();

		void Init();

		void Shutdown();

		void Update(float timeDelta);

		void Draw();

	private:



	private:

		Core::Application* const m_application;		
		Core::IPainter& m_Painter;
		
};