#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island in the given grid.

    Args:
        grid: A list of lists of integers, where 0 represents water and
        1 represents land.

    Returns:
        The perimeter of the island as an integer.

    Raises:
        ValueError: If the grid is not rectangular, has
        dimensions exceeding 100, or does not have exactly
        one island.
    """

    height = len(grid)
    if height > 100:
        raise ValueError("Grid height exceeds 100")
    width = len(grid[0])
    if width > 100:
        raise ValueError("Grid width exceeds 100")
    islands = 0
    for row in grid:
        islands += sum(1 for cell in row if cell == 1)
    if islands != 1:
        raise ValueError("Grid must have exactly one island")

    perimeter = 0
    visited = set()

    def explore(row, col):
        if not (0 <= row < height and 0 <= col < width):
            return 1
        if grid[row][col] == 0 or (row, col) in visited:
            return 0
        visited.add((row, col))
        return (
            explore(row - 1, col)
            + explore(row + 1, col)
            + explore(row, col - 1)
            + explore(row, col + 1)
        )

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1 and (row, col) not in visited:
                perimeter += explore(row, col)
                break

    return perimeter