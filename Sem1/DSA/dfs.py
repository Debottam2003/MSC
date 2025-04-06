from adjacentmatrix import adjmatrix
class dfs(adjmatrix):
    def pri(self,graph):
          self.graph = graph
          for row in self.graph:
            for val in row:
                print(" ", val, end="")
            print()
graph = dfs.mat()
d = dfs()
d.pri(graph)