#pragma once

namespace Core
{
	class IPainter;
}

class GameObject
{
	public:

		GameObject();
		GameObject(const Vector2& position);
		GameObject(const Vector2& position, const Vector2& scale, float rotation);
		

		virtual ~GameObject() {}

		Vector2 GetPosition();
		void SetPosition(const Vector2& position);

		float GetRotation();
		void SetRotation(float rotation);

		Vector2 GetScale();
		void SetScale(const Vector2& scale);

		virtual void Init() {}
		virtual void Draw(Core::IPainter* painter){}
		virtual void Update(float deltaTime){}
		virtual void Shutdown(){}

	protected:
		
		Vector2 m_Position;
		Vector2 m_Scale;
		float	m_Rotation;
		
};