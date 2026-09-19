#include	"maximov.h"
#include	<cmath>
//	Работа тока
double	currentWork(double	U, double	I, double	t) {
	return	U * I * t;
}
//	Теплота тока
double	jouleHeat(double	I, double	R, double t) {
	return	I * I * R * t;
}