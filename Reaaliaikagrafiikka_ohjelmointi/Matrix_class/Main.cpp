#include "Matrix.h"
#include <iostream>
//as
int main()
{

	Matrix<double> mat1(3, 3, 2.0);
	Matrix<double> mat2(3, 3, 3.0);

	Matrix<double> mat3 = mat1 + mat2;
	Matrix<double> mat4 = mat1 * mat2;
	Matrix<double> mat5 = mat2 * 3;

	// Sum
	std::cout << "Sum" << std::endl;
	for (int i = 0; i < mat3.get_rows(); i++)
	{
		for (int j = 0; j < mat3.get_cols(); j++)
		{
			std::cout << mat3(i, j) << ", ";
		}
		std::cout << std::endl;
	}
	// Multiply
	std::cout << "Multiply" << std::endl;
	for (int i = 0; i < mat4.get_rows(); i++)
	{
		for (int j = 0; j < mat4.get_cols(); j++)
		{
			std::cout << mat4(i, j) << ", ";
		}
		std::cout << std::endl;
	}
	// Scalar 3 for mat2
	std::cout << "Scalar" << std::endl;
	for (int i = 0; i < mat5.get_rows(); i++)
	{
		for (int j = 0; j < mat5.get_cols(); j++)
		{
			std::cout << mat5(i, j) << ", ";
		}
		std::cout << std::endl;
	}

	system("pause");

	return 0;
}