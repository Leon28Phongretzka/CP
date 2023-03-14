<script>

// Javascript program to find smallest number
// with given sum of digits.

// Prints minimum number with given digit
// sum and only allowed digits as 4 and 7.
function findMin(sum)
{
	var a = 0, b = 0;
	
	while (sum > 0)
	{
		
		// Cases where all remaining digits
		// are 4 or 7 (Remaining sum of digits
		// should be multiple of 4 or 7)
		if (sum % 7 == 0)
		{
			b++;
			sum -= 7;
		}
		else if (sum % 4 == 0)
		{
			a++;
			sum -= 4;
		}

		// If both 4s and 7s are there
		// in digit sum, we subtract a 4.
		else
		{
			a++;
			sum -= 4;
		}
	}

	if (sum < 0)
	{
		document.write("-1n");
		return;
	}

	for(i = 0; i < a; i++)
		document.write("4");

	for(i = 0; i < b; i++)
		document.write("7");

	document.write();
}

// Driver code
findMin(15);

// This code is contributed by todaysgaurav

</script>
