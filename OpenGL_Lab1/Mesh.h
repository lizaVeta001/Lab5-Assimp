#pragma once
#pragma once
#include <vector>
#include "GL/glew.h"
#include <glm/glm.hpp>

struct Vertex {
    glm::vec3 Position;
    glm::vec3 Normal;
};

class Mesh {
public:
    std::vector<Vertex> vertices;
    std::vector<unsigned int> indices;
    unsigned int VAO;

    Mesh(std::vector<Vertex> vertices, std::vector<unsigned int> indices);
    void Draw();

private:
    unsigned int VBO, EBO;
    void setupMesh();
};