#ifndef VERTEX_H
#define VERTEX_H

#include "vec4.hpp"
#include "vec2.hpp"

struct Vertex
{
	glm::vec4 position;
	glm::vec4 color;
};

struct TexVertex
{
	glm::vec4 position;
	glm::vec2 texcoord;
};

#endif