import heapq


def GBFS(graph, heuristics, start, goal):
    open_list = [(heuristics[start], start)]
    closed_list = set()

    while open_list:
        h, current_node = heapq.heappop(open_list)
        print(current_node)

        if current_node == goal:
            return f"Goal {goal} found!"

        closed_list.add(current_node)

        for neighbour in graph[current_node]:
            if neighbour not in closed_list:
                heapq.heappush(open_list, (heuristics[neighbour], neighbour))

    return "No Path exists to the goal."


print("Bidur Khanal")
graph = {
    "A": ["B", "C"],
    "B": ["D", "E"],
    "C": ["F"],
    "D": [],
    "E": [],
    "F": ["G"],
    "G": [],
}

heuristics = {"A": 6, "B": 5, "C": 4, "D": 7, "E": 3, "F": 2, "G": 0}

start = "A"
goal = "F"

result = GBFS(graph, heuristics, start, goal)
print(result)
