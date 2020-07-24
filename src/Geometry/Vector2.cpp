#include "Vector2.h"

using namespace Geometry;

Vector2d Geometry::operator*(const DiagonalMatrix2d &left, const Vector2f &right){
	return Vector2d(right) * left;
}
Vector2d Geometry::operator*(const Vector2f &left, const DiagonalMatrix2d &right){
	return Vector2d(left) * right;
}

Vector2d Geometry::operator-(const Vector2d &left, const Vector2i &right){
	return left - Vector2d(right);
}
Vector2d Geometry::operator-(const Vector2i &left, const Vector2d &right){
	return Vector2d(left) - right;
}
