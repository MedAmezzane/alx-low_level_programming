#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    perimeter = 0
    rows = len(grid) - 1
    cols = len(grid[0]) - 1

    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            if cell == 1:
                # Check if the cell is at the border or adjacent to water
                if i == 0 or grid[i - 1][j] != 1:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] != 1:
                    perimeter += 1
                if j == cols or grid[i][j + 1] != 1:
                    perimeter += 1
                if i == rows or grid[i + 1][j] != 1:
                    perimeter += 1

    return perimeter
