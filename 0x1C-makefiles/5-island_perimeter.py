#!/usr/bin/python3
"""A module for evaluting 2d arrays"""


def island_perimeter(grid):
    """A simple function that counts border tiles in a 0, 1 matrix"""

    if not grid:
        return 0
    perim = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if grid[x - 1][y] == 0:
                    perim += 1
                if grid[x + 1][y] == 0:
                    perim += 1
                if grid[x][y - 1] == 0:
                    perim += 1
                if grid[x][y + 1] == 0:
                    perim += 1
    return perim
