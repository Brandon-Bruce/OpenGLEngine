#include "gl_core_4_4.h"
#include "Mesh.h"
#include "Vertex.h"

Mesh::Mesh()
{
}

template<typename T>
void Mesh::Create(T* verticies)
{
	SetUpVertexBuffers();
}

void Mesh::Destroy()
{
}

Mesh::~Mesh()
{
}

void Mesh::SetUpVertexBuffers(Vertex* verticies)
{
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, sizeof(Vertex),
		0);

	glEnableVertexAttribArray(1);
	glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, sizeof(Vertex),
		(void*)(sizeof(glm::vec4)));
}