#Inpot thu vien hang doi
from queue import PriorityQueue
v = 14
#Tao 1 do thi voi v dinh
graph = [[] for i in range(v)]

def best_first_search(actual_Src, target, n):
	visited = [False] * n #Danh dau tat ca cac nut la False chua doc qua
	pq = PriorityQueue()
	pq.put((0, actual_Src))#Chi phi h cua nut goc = 0
	visited[actual_Src] = True#Cac dinh da duyet qua = True
	
	while pq.empty() == False:
     
		u = pq.get()[1]#Lay ra dinh co h thap nhat
		print(u, end=" ")
		if u == target:
			break #Thoat neu tim thay dich

		for v, c in graph[u]:#Duyet qua cac dinh ke
      
			if visited[v] == False:
				visited[v] = True
				pq.put((c, v))
	print()

# Function for adding edges to graph


def addedge(x, y, cost):
	graph[x].append((y, cost))
	graph[y].append((x, cost))


# The nodes shown in above example(by alphabets) are
# implemented using integers addedge(x,y,cost);
addedge(0, 1, 3)
addedge(0, 2, 6)
addedge(0, 3, 5)
addedge(1, 4, 9)
addedge(1, 5, 8)
addedge(2, 6, 12)
addedge(2, 7, 14)
addedge(3, 8, 7)
addedge(8, 9, 5)
addedge(8, 10, 6)
addedge(9, 11, 1)
addedge(9, 12, 10)
addedge(9, 13, 2)

source = 0
target = 9
best_first_search(source, target, v)