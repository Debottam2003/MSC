#include <stdio.h>

int main()
{
    // Arrays to store profit and weight of items
    float profit[] = {60, 100, 120};
    float weight[] = {10, 20, 30};

    // Number of items
    int n = sizeof(profit) / sizeof(profit[0]);

    // Array to store profit to weight ratio and item index
    float p_w[n][2];

    // Capacity of the knapsack
    float capacity = 50.0;

    int i, j, temp;

    // Calculate profit to weight ratio for each item
    for (i = 0; i < n; i++)
    {
        p_w[i][1] = profit[i] / weight[i];
        p_w[i][0] = i;
    }

    // Print the profit to weight ratio for each item
    printf("Profit to weight ratio before sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("Intem %0.0f : profit to weight %0.2f \n", p_w[i][0], p_w[i][1]);
    }
    printf("\n");

    // Sort items based on profit to weight ratio in descending order
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (p_w[j][1] < p_w[j + 1][1])
            {
                // Swap the profit to weight ratio
                temp = p_w[j][1];
                p_w[j][1] = p_w[j + 1][1];
                p_w[j + 1][1] = temp;

                // Swap the item indices
                temp = p_w[j][0];
                p_w[j][0] = p_w[j + 1][0];
                p_w[j + 1][0] = temp;
            }
        }
    }

    // Print the sorted profit to weight ratio for each item
    printf("Profit to weight ratio after sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("Intem %0.0f : profit to weight %0.2f \n", p_w[i][0], p_w[i][1]);
    }

    float total_profit = 0.0;
    float current_weight = 0.0;
    float remaining_weight = 0.0;

    printf("\nItems included in the knapsack:");
    // Calculate the maximum profit that can be obtained
    for (i = 0; i < n; i++)
    {
        remaining_weight = capacity - current_weight;

        // If the item can be fully added to the knapsack
        if (weight[(int)p_w[i][0]] < remaining_weight && current_weight < capacity)
        {
            current_weight += weight[(int)p_w[i][0]];
            printf("\nItem %d : weight %0.2f profit: %0.2f fraction : 1", (int)p_w[i][0], weight[(int)p_w[i][0]], profit[(int)p_w[i][0]]);
            total_profit += profit[(int)p_w[i][0]];
        }
        else
        {
            // If the item can only be partially added to the knapsack
            current_weight = capacity;
            printf("\nItem %d : weight %0.2f profit: %0.2f fraction : %0.2f", (int)p_w[i][0], remaining_weight, (remaining_weight / weight[(int)p_w[i][0]]) * profit[(int)p_w[i][0]], remaining_weight / weight[(int)p_w[i][0]]);
            total_profit += (remaining_weight / weight[(int)p_w[i][0]]) * profit[(int)p_w[i][0]];
            break;
        }
    }

    // Print the total profit
    printf("\nTotal profit: ");
    printf("\n%f", total_profit);
}