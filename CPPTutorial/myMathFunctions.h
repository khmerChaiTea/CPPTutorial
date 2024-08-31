#pragma once
/*
* #ifndef MYMATHFUNCTIONS_H // Key1
* #define MYMATHFUNCTIONS_H
* 
* #endif
*/

int add(int a, int b)
{
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}

int add(int a, int b, int c, int d)
{
	return a + b + c + d;
}

int subtraction(int a, int b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}

float division(float a, float b)
{
	if (b == 0)
		return -1.f; // Error

	return a / b;
}

int division(int a, int b)
{
	if (b == 0)
		return -1; // Error

	return a / b;
}