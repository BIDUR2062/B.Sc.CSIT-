class MinMax:
    def __init__(self, tree):
        self.tree = tree

    def minimax(self, node, maximizing_player):
        if isinstance(self.tree[node], int):
            return self.tree[node]

        if maximizing_player:
            max_eval = float("-inf")
            for child in self.tree[node]:
                value = self.minimax(child, False)
                max_eval = max(max_eval, value)
            return max_eval

        else:
            min_eval = float("inf")
            for child in self.tree[node]:
                value = self.minimax(child, True)
                min_eval = min(min_eval, value)
            return min_eval


print("Bidur Khanal")
Tree = {
    "A": ["B", "C"],
    "B": ["D", "E"],
    "C": ["F", "G"],
    "D": 3,
    "E": 5,
    "F": 6,
    "G": 9,
}

minimax_algorithm = MinMax(Tree)
result = minimax_algorithm.minimax("A", True)
print("Optimal value for the root node (A):", result)
