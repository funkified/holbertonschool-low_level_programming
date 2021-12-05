#!/usr/bin/python3
""" functino island_perimeter """


def island_perimeter(grid):
    """ returns perimeter"""
    perimeter = 0
    r_max = len(grid)
    c_max = len(grid[0])

    for r in range(r_max):
        for c in range(c_max):
            if grid[r][c] == 1:
                if r == r_max - 1 or grid[r + 1][c] == 0:
                    perimeter += 1
                if r == 0 or grid[r - 1][c] == 0:
                    perimeter += 1
                if c == c_max - 1 or grid[r][c + 1] == 0:
                    perimeter += 1
                if c == 0 or grid[r][c - 1] == 0:
                    perimeter += 1
    return perimeter
