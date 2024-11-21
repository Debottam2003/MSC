class adjmatrix:  
    def mat():  
        n = int(input("Enter the number of vertices:"))
        matrix = []
        for i in range(n):
            matrix.append([0]*n)
        for i in range(n):
            for j in range(n):
                x = int(input("Enter the edge between {} and {}:".format(i,j)))
                matrix[i][j] = x
        # for i in range(n):
        #     for j in range(n):
        #         print(" ",matrix[i][j],end="")
        #     print()
        return matrix
# adjmatrix.mat()
# adj = adjmatrix()
# adj.mat()


