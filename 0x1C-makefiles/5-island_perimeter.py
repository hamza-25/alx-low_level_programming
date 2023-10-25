#!/usr/bin/python3
"""Define island module
"""


def island_perimeter(grid):
    """Representation of primeter island function
    """
    pri = 0
    for p_id, list in enumerate(grid):
        index = 0
        for elem in list:
            if elem == 1:
                pri += 4
                if index + 1 < len(list) and list[index + 1] == 1:
                    pri -= 1
                if index - 1 >= 0 and list[index - 1] == 1:
                    pri -= 1
                if p_id + 1 < len(grid) and grid[p_id + 1][index] == 1:
                    pri -= 1
                if p_id - 1 >= 0 and grid[p_id - 1][index] == 1:
                    pri -= 1
            index += 1
    return pri
