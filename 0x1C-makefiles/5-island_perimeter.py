#!/usr/bin/python3
""" This module defines island perimiter measuring function """


def island_perimeter(grid):
    """ Function that measures an island perimeter
    Args:
        grid(list): List of lists of integers
    Return:
        The perimeter of the island
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if grid[i][j - 1] == 1 and j - 1 >= 0:
                    perimeter -= 2
                if grid[i - 1][j] == 1 and i - 1 >= 0:
                    perimeter -= 2
    return perimeter
    if not grid:
        return 0
