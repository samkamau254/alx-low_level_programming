#!/usr/bin/python3
"""This module contains the function island perimeter
"""


def island_perimeter(grid):
    """This function returns the perimeter of the island described in grid

    Args:
        grid (list): list of integers

    Returns:
        int: perimeter of the island described in grid
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                perimeter += 4
                if r > 0 and grid[r - 1][c] == 1:
                    perimeter -= 2
                if c > 0 and grid[r][c - 1] == 1:
                    perimeter -= 2
    return perimeter
