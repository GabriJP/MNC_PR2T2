#include <cstdio>
#include <cstdlib>

#include <mkl.h>

using namespace std;

int main(int argc, char *argv[]) {

	double A[4] = { 1.0, 2.0, 3.0, 4.0 };
	double B[4] = { 5.0, 6.0, 7.0, 8.0 };

	//Cálculo de la norma o módulo
	double norma = cblas_dnrm2(4, A, 1);
	printf("Norma de A: %lf\n", norma);
	norma = cblas_dnrm2(4, B, 1);
	printf("Norma de B: %lf\n", norma);

	//Cálculo del producto escalar
	double pescalar = cblas_ddot(4, A, 1, B, 1);
	printf("Producto escalar de A y B: %lf\n", pescalar);

	//Suma ponderada: B = B + 2 * A
	cblas_daxpy(4, 2.0, A, 1, B, 1);
	printf("Suma ponderada:\n");
	for (int i = 0; i < 4; i++) {
		printf("%lf\n", B[i]);
	}

	getchar();
	return 0;
}