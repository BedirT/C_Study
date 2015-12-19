#include <stdio.h>
int num1[1000000], num2[1000000];
int temp[1000000], squ[1000000];

int main ()
{
	int i, j, k;
	int n1, n2, nth;
	int len1=1, len2=1, lenS;
	int x, hold=0;

	/*  t(n+2), t(n+1), t(n) == temp, num2, num1  */
	scanf ("%d %d %d", &n1, &n2, &nth);
	for (i=0;  n1!=0;  num1[i]=n1%10, n1/=10, len1=++i);
	for (i=0;  n2!=0;  num2[i]=n2%10, n2/=10, len2=++i);


	for (i=0; i<nth-2; i++)
	{
		for (j=0; j<len2; j++)
			for (k=0; k<len2; k++)
				squ[j+k] += num2[j]*num2[k];

		lenS = j+k-1;
		for (hold=0, j=0; j<lenS; j++)
		{
			x = (squ[j]+num1[j]+hold)/10; 
			temp[j] += (squ[j]+num1[j]+hold)%10;
			hold = x;
        }
		if (hold) temp[lenS++] = hold;

		for (j=0; j<lenS; j++)
		{
			num1[j] = num2[j];	
			num2[j] = temp[j];
			temp[j] = squ[j]  = 0;
		}
		len2 = lenS;
	}

	for (i=len2-1; i>=0; i--)
		printf ("%d", num2[i]);
	printf ("\n");

	return 0;
}