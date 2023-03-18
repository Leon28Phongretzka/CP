function fib(n)
{
	var F = [ [ 1, 1 ], [ 1, 0 ] ];
	if (n == 0)
		return 0;
		
	power(F, n - 1);

	return F[0][0];
}

function multiply(F, M)
{
	var x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
	var y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
	var z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
	var w = F[1][0] * M[0][1] + F[1][1] * M[1][1];

	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}

// Optimized version of power() in method 4 */
function power(F, n)
{
	if (n == 0 || n == 1)
		return;
		
	var M = [ [ 1, 1 ], [ 1, 0 ] ];

	power(F, n / 2);
	multiply(F, F);

	if (n % 2 != 0)
		multiply(F, M);
}

console.log(fib(n));

