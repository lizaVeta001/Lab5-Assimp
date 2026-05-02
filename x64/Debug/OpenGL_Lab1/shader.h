#pragma once
#include <iostream>
#include <string>
#include "GL/glew.h"

class Shader {
private:
    unsigned int ID;
    void checkCompileErrors(unsigned int shader, std::string type);

public:
    Shader(const char* vertexSource, const char* fragmentSource);
    ~Shader();
    void use();
    void setVec4(const std::string& name, float x, float y, float z, float w);
};