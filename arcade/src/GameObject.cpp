#include "GameObject.h"

GameObject::GameObject()
{
}

GameObject::GameObject(const Vector2& position)
{
}

GameObject::GameObject(const Vector2& position, const Vector2& scale, float rotation)
{
}


Vector2 GameObject::GetPosition()
{
	return m_Position;
}

void GameObject::SetPosition(const Vector2& position)
{
	m_Position = position;
}

float GameObject::GetRotation()
{
	return m_Rotation;
}

void GameObject::SetRotation(float rotation)
{
}

Vector2 GameObject::GetScale()
{
	return m_Scale;
}

void GameObject::SetScale(const Vector2& scale)
{
}


