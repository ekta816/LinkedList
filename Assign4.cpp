/*//Q1.

double sum_triples(double array[], int n) {//n: size of the array. Assume n is divisible by 3

	double sum = 0;

	for (int i = 0; i<n; i = i + 3)

		sum = sum + array[i];

	return sum;

}

//Q2.

double sum_exponentials(int n) {        //n is a power of 3, i.e., n=3^k or k=log n base 3

	int sum = 0;

	for (int i = 1; i<n; i = i * 3)

		sum = sum + i;

	return sum;

}

//Q3.

for (int i = 0; i<n; i++) {

	for (int j = n; j >= i; j--)

		cout << i << “, ” << j << endl;

}

//Q4.

for (int i = 0; i<n; i++) { //assume n is divisible by 2 => n = 2*k 

	for (j = n / 2; j>i; j--)

		sum = i + j;

}

//Q5.

//matrix multiplication of A[m][n] and B[n][p]. The product is saved into C[m][p].

void mult_matricies(double A[][n], double B[][p], double C[][p], int m, int n, int p) {

	for (int i = 0; i<m; i++) {

		for (int j = 0; j<p; j++) {

			C[i][j] = 0;

			for (int k = 0; k<n; k++) {

				C[i][j] += A[i][k] * B[k][j];

			}//for-k

		}//for-j

	}//for-i

}

*/