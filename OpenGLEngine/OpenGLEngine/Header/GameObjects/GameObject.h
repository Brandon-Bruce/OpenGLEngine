#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
public:
	GameObject();
	void Create();
	virtual void Update() = 0;
	void Render();
	void Destroy();
	~GameObject();

private:
};

#endif