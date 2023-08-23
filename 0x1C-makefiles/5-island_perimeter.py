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
    if grid:
        landCells = []
        cellLength = 1
        perimeter = 0
        for cells in grid:
            # check if there is land in row of cells
            if 1 in cells:
                for value in cells:
                    # confirm howmany land cells are
                    # there in that row and add to a list
                    if value == 1:
                        landCells.append(value)
        # now calculate perimeter if found any land cell
        if len(landCells) > 0:
            if len(landCells) == 1:
                # only one cell
                perimeter = cellLength * 4
                return perimeter

            first_last_cell_perimeter = 0
            other_cell_perimeter = 0
            # use index to see position of the cells to know
            # wich sedes to add to perimeter
            for index, cell in enumerate(landCells):

                # if cell is 1st or last add 3 side of its length
                if index == 0 or index == len(landCells) - 1:
                    first_last_cell_perimeter += cellLength * 3

                # if cell is middle add 2 sides of the length
                if index > 0 and index < len(landCells) - 1:
                    other_cell_perimeter += cellLength * 2

            perimeter = first_last_cell_perimeter + other_cell_perimeter
            return perimeter
