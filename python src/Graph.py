class Graph:
	adj_list = dict()

	def __init__(self,v):
		self.adj_list = {i:[] for i in range(v)}
		self.v = v

	def add_egde(self, u, v):
		self.adj_list[u].append(v)

	def display_edge(self):
		for i in self.adj_list:
			print(i,self.adj_list[i])


	def dfs_util(self, s, marked):
		if marked[s] == False:
			marked[s] = True
			print(s, end=" ")
			for i in self.adj_list[s]:
				self.dfs_util(i, marked)

	def dfs(self, s):
		marked  = [False]*self.v
		self.dfs_util(s, marked)
		

	def bfs(self, u):

		v = [False] * self.v
		l = []

		q = []
		q.append(u)
		v[u] = True

		while q:
			n = q.pop(0)
			l.append(n)
			for i in self.adj_list[n]:
				if v[i] == False :
					q.append(i)
					v[i] = True
		return l

	def allMarked(self,marked):
		for i in marked:
			if i == False:
				return False
		return True

	def topoSort(self):
		marked = [False]*self.v
		indeg = [0]*self.v
		topo = []

		for i in self.adj_list:
			l = self.adj_list[i]
			for j in l:
				indeg[j] += 1
		print("indeg:", indeg)
		
		c = 0
		while(not self.allMarked(marked)):

			n = -1
			for i in range(self.v):
				if indeg[i] == 0 and marked[i] == False:
					n = i
					c += 1
					break
			if n == -1:
				print("cycle")
				return
			n = i
			marked[i] = True
			topo.append(n)

			for i in self.adj_list[n]:
				indeg[i] -=1
			print(n,indeg)
		if c == self.v:
			print(topo)
		else:
			print("cycle")
		

def main():
	g = Graph(5)
	g.add_egde(0,1)
	g.add_egde(0,2)
	g.add_egde(1,2)
	g.add_egde(1,3)
	g.add_egde(2,4)
	g.add_egde(3,4)
	g.add_egde(4,1)
	
	g.dfs(0)
	# print(g.bfs(0))


main()
