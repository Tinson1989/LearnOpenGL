#pragma once
#include <glad/glad.h>
#include <glm/gtc/matrix_transform.hpp>
#define STB_IMAGE_IMPLEMENTATION
#include <stb/stb_image.h>
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include "Mesh.h"

#include <vector>

class Model
{
public:
	std::vector<Texture> texturesLoaded;
	std::vector<Mesh> meshes;
	std::string directory;
	bool gammaCorrection;

	Model(const std::string& path, bool gamma = false);
	void draw(Shader& shader);
	static unsigned int _textureFromFile(const char* path, const std::string& directory, bool gamma = false);

private:
	void _loadModel(const std::string& path);
	void _processNode(aiNode* node, const aiScene* scene);
	Mesh _processMesh(aiMesh* mesh, const aiScene* scene);
	std::vector<Texture> _loadMaterialTextures(aiMaterial* mat, aiTextureType type, std::string typeName);
	
};