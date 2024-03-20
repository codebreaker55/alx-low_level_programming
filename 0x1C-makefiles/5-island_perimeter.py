#!/usr/bin/python3
"""function that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """
    grid is a list of list of integers:
       - 0 represents a water zone
        -1 represents a land zone
        -One cell is a square with side length 1
        -Grid cells are connected horizontally/vertically (not diagonally).
        -Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water,
    and there is one island (or nothing).
    The island doesn’t have “lakes”,
    (water inside that isn’t connected to the water around the island).
    """

    width = len(grid[0])
    height = len(grid)
    land_size = 0
    land_edgs = 0

    for n in range(height):
        for m in range(width):
            if grid[n][m] == 1:
                land_size = land_size + 1
                if (n > 0 and grid[n - 1][m] == 1):
                    land_edgs = land_edgs + 1
                if (m > 0 and grid[n][m - 1] == 1):
                    land_edgs = land_edgs + 1
    return land_size * 4 - land_edgs * 2
