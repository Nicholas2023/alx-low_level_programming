#!/usr/bin/python3
"""
A script that returns the perimeter of an island
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid
    Args:
        grid (List[List[int]]): A list of lists rep'ng the island
    Returns:
        int: The perimeter of the island
    """
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4

                # Check the adj cells and red the peri accor.
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
