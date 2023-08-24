#!/usr/bin/python3

"""
calculate perimeter of an island
"""


def island_perimeter(grid):
    """
    list of grids with values int
    1 rep land i.e 1 square of length 1
    0 rep water
    """
    if not grid:
        return 0

    rows = len(grid)
    cols = len(grid[0])
    squareLength = 1

    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            # calculate perimeter for the current cell
            if grid[row][col] == 1:
                perimeter += (squareLength * 4)

                # confirm if there is a left cell touching current cell
                # if yes subtract the two sides touching each other
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= (squareLength * 2)

                # confirm if there is a right cell touching current cell
                # if yes subtract the two sides touching each other
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= (squareLength * 2)
    return perimeter
