#!/usr/bin/python3
"""
Module for function island_perimeter(grid): that returns the perimeter of the
island.
"""


def island_perimeter(grid):
    """
    Function that returns the perimeter of the island.

    Args:
        grid (list): The grid that describe de island.

    Return:
        Return the perimeter of the island.
    """
    perimtr = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    perimtr += 1
                if j == 0 or grid[i][j - 1] != 1:
                    perimtr += 1
                if j == width or grid[i][j + 1] != 1:
                    perimtr += 1
                if i == length or grid[i + 1][j] != 1:
                    perimtr += 1
    return perimtr
