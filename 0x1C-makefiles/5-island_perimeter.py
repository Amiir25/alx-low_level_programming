#!/usr/bin/python3

"""
5-island_perimeter.py

This module provides a function that calculates the perimeter
of an island described in grid. The grid is a list of lists
which contais 5 lists with 6 elements each.

The elements of the lists of the grid are either 0 or 1.
0 represents a water zone and 1 represents a land zone.
An island is formed by connected 1s, either horizontally or
vertically but not diagonally.

Usage:
  The function is intended to calculate the perimeter of the island
  which is the number of edges of 1s that are exposed to water
  i.e., adjacent to a 0 or at the boundary of the grid.
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island described in a grid

    Args:
        grid (list) - List of 5 lists with 6 elements each
    """

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                if r == 0 or grid[r-1][c] == 0:
                    perimeter += 1
                if r == rows - 1 or grid[r+1][c] == 0:
                    perimeter += 1
                if c == cols - 1 or grid[r][c+1] == 0:
                    perimeter += 1
                if c == 0 or grid[r][c-1] == 0:
                    perimeter += 1

    return perimeter
