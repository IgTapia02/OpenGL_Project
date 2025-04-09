/**
    @author - Ignacio Tapia Marfil
*/

#ifndef CUBE_HEADER
#define CUBE_HEADER

    #include <glad/glad.h>

    namespace OpenGLTapia
    {

        class Cube
        {

        private:

            static const GLfloat coordinates[];
            static const GLfloat colors[];
            static const GLubyte indices[];

        private:

            GLuint vbo_ids[3];
            GLuint vao_id;

        public:

            Cube();
            ~Cube();

            void Render();

        };
    }

#endif
