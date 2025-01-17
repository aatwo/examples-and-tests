#ifndef SPRITERENDERER_H
#define SPRITERENDERER_H


#include <glm/glm.hpp>
#include "texture.h"
#include "shader.h"


class SpriteRenderer
{
    public:
        SpriteRenderer(Shader &shader);
        ~SpriteRenderer();

        void DrawSprite(Texture2D &texture, glm::vec2 position,
            glm::vec2 size = glm::vec2(10, 10), GLfloat rotate = 0.0f,
            glm::vec3 color = glm::vec3(1.0f));
    private:
        Shader shader;
        GLuint quadVAO;

        void initRenderData();
};


#endif // SPRITERENDERER_H
