GLvoid creer_paysan()
{
    struct cube1 membre = creer_cube1(1.5);
	glPushMatrix();{
	    glColor3f(0.1,0.1,0.1);
	    glutSolidSphere(0.5,10,100);
	}
    glPopMatrix();
    //Corps
    glPushMatrix();{
        glTranslatef(0,-1.5,0);
	    glColor3f(0.1,0.1,0.1);
        glScalef(0.3,0.7,0.2);
	    affiche_cube1(membre);
	}
	glPopMatrix();
    //Bras gauche   (epaule jusqu'au bas)
        //Articulation
    glPushMatrix();{
	    glColor3f(0,1,1);
        glTranslatef(0.6,-0.8,0);
	    glutSolidSphere(0.2,10,100);
	}
    glPopMatrix();
    glPushMatrix();{
        glTranslatef(0.7,-1.2,0);
	    glColor3f(0,0,1);
        glScalef(0.1,0.2,0.1);
	    affiche_cube1(membre);
	}
	glPopMatrix();
        //Articulation
    glPushMatrix();{
	    glColor3f(0,1,1);
        glTranslatef(0.7,-1.6,0);
	    glutSolidSphere(0.2,10,100);
	}
    glPopMatrix();
    glPushMatrix();{
        glTranslatef(0.7,-2,0);
	    glColor3f(1,0,0);
        glScalef(0.1,0.2,0.1);
	    affiche_cube1(membre);
	}
	glPopMatrix();
    glPushMatrix();{
	    glColor3f(0,1,0);
        glTranslatef(0.7,-2.4,0);
	    glutSolidSphere(0.15,10,100);
	}
    glPopMatrix();
    //Bras droit
        //Articulation
    glPushMatrix();{
	    glColor3f(0,1,1);
        glTranslatef(-0.6,-0.8,0);
	    glutSolidSphere(0.2,10,100);
	}
    glPopMatrix();
    glPushMatrix();{
        glTranslatef(-0.7,-1.2,0);
	    glColor3f(0,0,1);
        glScalef(0.1,0.2,0.1);
	    affiche_cube1(membre);
	}
	glPopMatrix();
        //Articulation    
    glPushMatrix();{
	    glColor3f(0,1,1);
        glTranslatef(-0.7,-1.6,0);
	    glutSolidSphere(0.2,10,100);
	}
    glPopMatrix();
    glPushMatrix();{
        glTranslatef(-0.7,-2,0);
	    glColor3f(1,0,0);
        glScalef(0.1,0.2,0.1);
	    affiche_cube1(membre);
	}
	glPopMatrix();
    glPushMatrix();{
	    glColor3f(0,1,0);
        glTranslatef(-0.7,-2.4,0);
	    glutSolidSphere(0.15,10,100);
	}
    glPopMatrix();
    //Jambe gauche   (cuisse jusqu'au pied)
        //Articulation
    glPushMatrix();{
        glTranslatef(-0.25,-1.8,0);
        glPushMatrix();{
            glColor3f(0,1,1);
            glTranslatef(0.6,-0.8,0);
            glutSolidSphere(0.2,10,100);
        }
        glPopMatrix();
        glPushMatrix();{
            glTranslatef(0.7,-1.2,0);
            glColor3f(0,0,1);
            glScalef(0.1,0.2,0.1);
            affiche_cube1(membre);
        }
        glPopMatrix();
            //Articulation
        glPushMatrix();{
            glColor3f(0,1,1);
            glTranslatef(0.7,-1.6,0);
            glutSolidSphere(0.2,10,100);
        }
        glPopMatrix();
        glPushMatrix();{
            glTranslatef(0.7,-2,0);
            glColor3f(1,0,0);
            glScalef(0.1,0.2,0.1);
            affiche_cube1(membre);
        }
        glPopMatrix();
        glPushMatrix();{
            glColor3f(0,1,0);
            glTranslatef(0.7,-2.4,0);
            glutSolidSphere(0.15,10,100);
        }
        glPopMatrix();
    }
    glPopMatrix();
    //Jambe droit
        //Articulation
    glPushMatrix();{
        glTranslatef(0.25,-1.8,0);        
        glPushMatrix();{
            glColor3f(0,1,1);
            glTranslatef(-0.6,-0.8,0);
            glutSolidSphere(0.2,10,100);
        }
        glPopMatrix();
        glPushMatrix();{
            glTranslatef(-0.7,-1.2,0);
            glColor3f(0,0,1);
            glScalef(0.1,0.2,0.1);
            affiche_cube1(membre);
        }
        glPopMatrix();
            //Articulation    
        glPushMatrix();{
            glColor3f(0,1,1);
            glTranslatef(-0.7,-1.6,0);
            glutSolidSphere(0.2,10,100);
        }
        glPopMatrix();
        glPushMatrix();{
            glTranslatef(-0.7,-2,0);
            glColor3f(1,0,0);
            glScalef(0.1,0.2,0.1);
            affiche_cube1(membre);
        }
        glPopMatrix();
        glPushMatrix();{
            glColor3f(0,1,0);
            glTranslatef(-0.7,-2.4,0);
            glutSolidSphere(0.15,10,100);
        }
        glPopMatrix();
    }
    glPopMatrix();
}