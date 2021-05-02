#!/usr/bin/python3
def island_perimeter(grid):
	if not grid:
		return 0
	perim = 0
	for x in range(1, len(grid) - 1):
		for y in range(1, len(grid[x]) - 1):
			if grid[x][y] == 1:
				if grid[x - 1][y] == 0:
					perim += 1
				if grid[x + 1][y] == 0:
					perim += 1
				if grid[x][y - 1] == 0:
					perim += 1
				if grid[x][y + 1] == 0:
					perim += 1
	return perim
