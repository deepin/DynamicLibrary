// MathFuncsDll.h

namespace MathFuncs
{
	class MyMathFuncs
	{
	public:
		// returns a + b
		static _declspec(dllexport) double Add(double a, double b);

		// returns a - b
		static _declspec(dllexport) double Subtract(double a, double b);

		// returns a * b
		static _declspec(dllexport) double Multiply(double a, double b);

		// returns a / b
		static _declspec(dllexport) double Divide(double a, double b);
	};
}