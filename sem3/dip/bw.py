b_matrix = [
    [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
    [0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0],
    [0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0],
    [0,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0],
    [0,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,0],
    [0,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,0],
    [0,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0],
    [0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,0],
    [0,1,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,1,0],
    [0,1,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,1,0],
    [0,1,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,1,0],
    [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
]

#! [[0]*20]*12 same dimension but all 12 rows are internally points to a same array 
#! (all are reference of an array)

#* w_matrix = [[0 for _ in range(20)] for _ in range(12) ] 

w_matrix = []
for i in range(len(b_matrix)):
    row = []
    for j in range(len(b_matrix[0])):
        row.append(0)
    w_matrix.append(row)

for i in range(len(b_matrix)):
    for j in range(len(b_matrix[0])):
        if b_matrix[i][j] == 0:
           w_matrix[i][j] = 1

def show(matrix):
    for i in matrix:
        for j in i:
            print(j, end=" ")
        print()

show(b_matrix)
show(w_matrix)