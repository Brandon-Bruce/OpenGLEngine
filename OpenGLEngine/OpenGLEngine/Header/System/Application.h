#ifndef APPLICATION_H
#define APPLICATION_H
#include "OpenGLEngine_DLL.h"

class OPENGLENGINE_API Application
{
public:
	Application();
	void Create();
	void Run();
	void Destroy();
	~Application();

private:
	bool running;
};

#endif