#pragma once

#include "../Common/pch.h"

/*
    Vertex data classes that define the data storage of data to
    be stored by the application geometry classes and copied to
    a vertex buffer object for importation into an OpenGL shader
    program.

    Other vertex data classes can be added here or referenced from
    another C++ .h file as an include statement.
*/

// class to store vertex location and surface normal data
class point_vertex_class{// was vertex_data_class

public:
    point_vertex_class() : mPos(), mNormal() {}
    
    // Initialize by string to be tokenized
    // TODO: Better handle outside of this class
    point_vertex_class(const std::vector<std::string> tokens)
    {
    }

    point_vertex_class(const glm::vec3& pos, const glm::vec3& normal)
      : mPos(pos), mNormal(normal)
    {
    }

    ~point_vertex_class() = default;


    glm::vec3 mPos;

    glm::vec3 mNormal;
};

// class to store vertex location data
class point_data_class {

public:
    point_data_class() : mPos(){}

    point_data_class(const glm::vec3& pos): mPos(pos)
    {
    }

    ~point_data_class() = default;

    glm::vec3 mPos;
};

// class to store vertex location and an integer data value associated
// with that vertex location.
/*
    This class is designed to store a value in the vev4 pos.W variable
    At some future time when it is faund how to pass an integer value
    to a shader using this class, this may change.
*/
class point_data_value_class {

public:
    point_data_value_class() : mPos(){}
   
    point_data_value_class(const glm::vec4& pos) 
        //: mPos(pos), mvalue(value)
        : mPos(pos)
    {
    }

    ~point_data_value_class() = default;

    glm::vec4 mPos;
    //glm::vec3 mPos;
    //int       mvalue;
};


// class to store vertex location, surface normal data and an integer 
// data value associated with that vertex location.
/*
    This class is not tested and going by inability to pass
    an integer value to a shader, the same may apply for passing
    a normal vector to a shader.

    This function may not be necessary and is thus commented out
*/
/*
class point_vertex_data_class {

public:
    point_vertex_data_class() : mPos(), mNormal(), mvalue() {}

    point_vertex_data_class(const glm::vec3& pos,const glm::vec3& normal, const int& value)
        : mPos(pos), mNormal(normal), mvalue(value)
    {
    }

    ~point_vertex_data_class() = default;

    glm::vec3 mPos,mNormal;
    int       mvalue;
};
*/