#ifndef MESH_H
#define MESH_H

struct Vertex;
struct TexVertex;

class Mesh
{
public:
	Mesh();
	template<typename T>
	void Create(T* verticies);
	void Destroy();
	~Mesh();

private:
	void SetUpVertexBuffers(Vertex * verticies);

	unsigned int m_VAO;
	unsigned int m_VBO;
	unsigned int m_IBO;
	unsigned int indexCount;
};

#endif