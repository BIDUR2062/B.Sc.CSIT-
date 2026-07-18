def dfs_recursive(graph, node, GoalState, visited=None):
    if visited is None:
        visited = set()

    visited.add(node)
    print(node)

    for neighbour in graph[node]:
        if neighbour == GoalState:
            print(f"{neighbour}\nGoal State {neighbour} is Found ")
            break
        if neighbour not in visited:
            dfs_recursive(graph, neighbour, GoalState, visited)


graph = {
    "A": ["B", "C"],
    "B": ["D", "E"],
    "C": ["F"],
    "D": [],
    "E": [],
    "F": ["G"],
    "G": [],
}
print("Bidur Khanal")
dfs_recursive(graph, "A", "F")
