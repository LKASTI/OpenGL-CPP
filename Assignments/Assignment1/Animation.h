#pragma once

#include <iostream>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Animation
{
public:

	Animation();
	~Animation();

	void init();
	void update(float delta_time);

	void reset();
	glm::mat4 get_model_mat() { return m_model_mat; };
	void set_model_mat(const glm::mat4& modelMat) {m_model_mat = modelMat;}

private:
	glm::mat4 m_model_mat;
};

