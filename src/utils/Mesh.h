#pragma once
#include <string>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#define MAX_BONE_INFLUENCE 4

struct Vertex
{
	glm::vec3 position;
	glm::vec3 normal;
	glm::vec3 texCoords;
	glm::vec3 tangent;
	glm::vec3 bitangent;
	int mBoneIDs[MAX_BONE_INFLUENCE];
	float mWeights[MAX_BONE_INFLUENCE];
};

struct Texture
{
	unsigned int id;
	std::string type;
	std::string path;
};

class Mesh
{
	
};
