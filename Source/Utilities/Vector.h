/* Ares-Vector */
#pragma once

/* Typedefinitions */
typedef float vec_t;

/* Vector */
class Vector {
public:
	vec_t x, y, z;
public:

	Vector(void) {
		x = y = z = 0.0f;
	}

	Vector(float x, float y, float z) {
		x = x, y = y, z = z;
	}

	float operator[](int i) const {
		return ((float *)this)[i];
	}

	Vector operator + (const Vector& v) const {
		return Vector(x + v.x, y + v.y, z + v.z);
	}

};