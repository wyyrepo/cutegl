#include "cubemesh.h"

namespace cgl {
CubeMesh::CubeMesh(QObject *parent) : Mesh(parent)
{

    makeMesh();

}

void CubeMesh::makeMesh()
{
    clearVertices();

    QVector<Vertex> faces1;
    QVector<Vertex> faces2;
    QVector<Vertex> faces3;
    QVector<Vertex> faces4;
    QVector<Vertex> faces5;
    QVector<Vertex> faces6;


    faces1.append(Vertex( 1.0f,  1.0f, -1.0f,  0,0));
    faces1.append(Vertex(-1.0f,  1.0f, -1.0f,  0,1));
    faces1.append(Vertex(-1.0f, -1.0f, -1.0f,  1,1));
    faces1.append(Vertex( 1.0f,  1.0f, -1.0f,  1,1));
    faces1.append(Vertex( 1.0f, -1.0f, -1.0f,  1,0));
    faces1.append(Vertex(-1.0f, -1.0f, -1.0f,  0,0));

    faces2.append(Vertex( 1.0f,  1.0f, 1.0f,  0,0));
    faces2.append(Vertex(-1.0f,  1.0f, 1.0f,  0,1));
    faces2.append(Vertex(-1.0f, -1.0f, 1.0f,  1,1));
    faces2.append(Vertex( 1.0f,  1.0f, 1.0f,  1,1));
    faces2.append(Vertex( 1.0f, -1.0f, 1.0f,  1,0));
    faces2.append(Vertex(-1.0f, -1.0f, 1.0f,  0,0));

    faces3.append(Vertex( 1.0f,  1.0f, 1.0f,  1,1));
    faces3.append(Vertex(-1.0f,  1.0f, 1.0f,  0,1));
    faces3.append(Vertex(-1.0f,  1.0f,-1.0f,  0,0));
    faces3.append(Vertex( 1.0f,  1.0f, 1.0f,  1,1));
    faces3.append(Vertex( 1.0f,  1.0f,-1.0f,  1,0));
    faces3.append(Vertex(-1.0f,  1.0f,-1.0f,  0,0));

    faces4.append(Vertex( 1.0f,  -1.0f, 1.0f,  1,1));
    faces4.append(Vertex(-1.0f,  -1.0f, 1.0f,  0,1));
    faces4.append(Vertex(-1.0f,  -1.0f,-1.0f,  0,0));
    faces4.append(Vertex( 1.0f,  -1.0f, 1.0f,  1,0));
    faces4.append(Vertex( 1.0f,  -1.0f,-1.0f,  1,0));
    faces4.append(Vertex(-1.0f,  -1.0f,-1.0f,  0,0));

    faces5.append(Vertex( 1.0f,   1.0f, 1.0f,  1,1));
    faces5.append(Vertex( 1.0f,  -1.0f, 1.0f,  0,1));
    faces5.append(Vertex( 1.0f,  -1.0f,-1.0f,  0,0));
    faces5.append(Vertex( 1.0f,   1.0f, 1.0f,  1,0));
    faces5.append(Vertex( 1.0f,   1.0f,-1.0f,  1,0));
    faces5.append(Vertex( 1.0f,  -1.0f,-1.0f,  0,0));

    faces6.append(Vertex( -1.0f,   1.0f, 1.0f,  1,1));
    faces6.append(Vertex( -1.0f,  -1.0f, 1.0f,  0,1));
    faces6.append(Vertex( -1.0f,  -1.0f,-1.0f,  0,0));
    faces6.append(Vertex( -1.0f,   1.0f, 1.0f,  1,0));
    faces6.append(Vertex( -1.0f,   1.0f,-1.0f,  1,0));
    faces6.append(Vertex( -1.0f,  -1.0f,-1.0f,  0,0));



    for (int i=0; i<6; ++i)
    {
        faces1[i].setColor(Qt::red);
        faces2[i].setColor(Qt::blue);
        faces3[i].setColor(Qt::green);
        faces4[i].setColor(Qt::yellow);
        faces5[i].setColor(Qt::magenta);
        faces6[i].setColor(Qt::cyan);
    }

    addVertex(faces1);
    addVertex(faces2);
    addVertex(faces3);
    addVertex(faces4);
    addVertex(faces5);
    addVertex(faces6);


}
}




