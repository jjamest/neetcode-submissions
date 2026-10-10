class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        col_freq = defaultdict(set)
        row_freq = defaultdict(set)
        sq_freq = defaultdict(set)
        
        for r in range(9):
            for c in range(9):
                if board[r][c] == ".":
                    continue

                if board[r][c] in row_freq[r]:
                    return False
                elif board[r][c] in col_freq[c]:
                    return False
                elif board[r][c] in sq_freq[(r // 3, c // 3)]:
                    return False

                col_freq[c].add(board[r][c])
                row_freq[r].add(board[r][c])
                sq_freq[(r // 3, c // 3)].add(board[r][c])
        
        return True