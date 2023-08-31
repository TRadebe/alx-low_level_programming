#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (list of list of integers): A grid representing the island and water zones.

    Returns:
    int: The perimeter of the island.
    """
    p = 0
    r = len(grid)
    c = len(grid[0]) if r > 0 else 0

    for i in range(r):
        for j in range(c):
            if grid[i][j] == 1:
                p += 4  # Each land cell contributes 4 to the perimeter

                # Check right and down neighbors, subtracting 2 for each adjacent land cell
                if j < c - 1 and grid[i][j + 1] == 1:
                    p -= 2
                if i < r - 1 and grid[i + 1][j] == 1:
                    p -= 2

    return p
