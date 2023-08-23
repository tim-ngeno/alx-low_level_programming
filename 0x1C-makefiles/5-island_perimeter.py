#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island as
    described in the grid.

    Args:
        grid (List[List[int]]): A list of lists
        representing the island grid.

    Returns:
        int: The perimeter of the island.
    """

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                if (i > 0 and grid[i-1][j] == 1
                        or j > 0 and grid[i][j-1] == 1):
                    perimeter -= 2

    return perimeter
