#include "Carte.hpp"

Carte::Carte(){};

void Carte::solcarte(){
    glPushMatrix();{

    glRotatef(45,0.0,0.0,1.0);
        glPushMatrix();{
        
            glColor3f(0.2,0.8,0.2);
            glBegin(GL_QUADS);
                glTexCoord2f(-1.0,2.0);
                glVertex3f(-250,250,0);
                glTexCoord2f(2.0,2.0); 
                glVertex3f(250,250,0);
                glTexCoord2f(2.0,-1.0);
                glVertex3f(250,-250,0);
                glTexCoord2f(-1.0,-1.0);
                glVertex3f(-250,-250,0);
            glEnd();
            glColor3f(1,1,1);
        }glPopMatrix();
    }glPopMatrix();
}