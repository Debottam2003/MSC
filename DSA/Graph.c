#include <stdio.h>

int main()
{
	int n, flag;
	int source = -1, minElement;
	// Taking input of the sequence size
	printf("Enter the sequence size : ");
	scanf("%d", &n);
	int a[n], final[n], c = 0;
	// Taking input of the sequence elements
	printf("Enter the values : ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	int g[n][n];
	// Creating the RKPian Graph
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j && a[i] <= a[j])
			{
				g[i][j] = 1;
			}
			else
			{
				g[i][j] = 0;
			}
		}
	}

	// RKPian_Graph sort implementation
	for (int k = 0; k < n; k++)
	{
		printf("RKPian Graph : %d iteration : \n", k + 1);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{

				printf("%4d", g[i][j]);
			}
			printf("\n");
		}
		source = -1;
		for (int j = 0; j < n; j++)
		{
			flag = 0;
			// Finding the source vertices
			for (int i = 0; i < n; i++)
			{
				if (g[i][j] != 0)
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				if (j > source)
				{
					source = j;
				}
			}
		}
		// Inserting the elements int the final non decreasing sequence
		minElement = a[source];
		final[c] = minElement;
		c++;
		printf("%4d\n", minElement);
		// Modifying the RKPian graph after each iteration
		for (int i = 0; i < n; i++)
		{
			g[i][source] = -1;
			if (g[source][i] == 1)
			{
				g[source][i] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			printf("%4d", g[i][j]);
		}
		printf("\n");
	}
	// Printing the final non descending sequence
	printf("\nThe Final sequence is : \n");
	for (int i = 0; i < n; i++)
	{
		printf("%4d", final[i]);
	}
}
