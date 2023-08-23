#!/usr/bin/python3
""" periemter module """


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the given grid.
    
    Args:
        grid (list): A list of lists of integers representing the landscape,
                     where 1 denotes land and 0 denotes water.
                     
    Returns:
        int: The perimeter of the island.
        
    Constraints:
        - The grid's width and height are both limited to a maximum of 100 cells.
        - The grid is entirely surrounded by water.
        - There exists either one island or none in the grid.
        - Each cell in the grid is a square with a side length of 1.
    """
    lands = 0
    side = 0
    for height in range(len(grid)):
        for width in range(len(grid[height])):
            if grid[height][width] == 1:
                lands += 1
                if height > 0 and grid[height-1][width] == 1:
                    side += 1
                if width > 0 and grid[height][width-1] == 1:
                    side += 1
    return lands * 4 - side * 2
