class Graph:
	graph = dict()

	# initializes the graph
	def __init__(self, v):
		self.v = v
		self.graph = {i:[] for i in range(v)}

	# add an edge to the graph
	def add_edge(self, u, v):
		self.graph[u].append(v)
		self.graph[v].append(u)

	# displays adj list
	def display_edge(self):
		for i in self.graph:
			print(i, self.graph[i])

	# print the nth hub nodes away from s(source)
	def nth_hub(self, s, n):
		q = []
		marked = [False]*self.v
		q.append(s)
		marked[s] = True

		# for nth hub
		for i in range(n):

			# for empty the queue
			length = len(q)
			for j in range(length):

				# for adding the adj nodes
				n = q.pop(0)
				for x in self.graph[n]:
					
					if(marked[x] == False):
						q.append(x)
						marked[x] = True

		return q


g = Graph(8)
g.add_edge(0,1)
g.add_edge(0,2)
g.add_edge(1,3)
g.add_edge(2,4)
g.add_edge(0,5)
g.add_edge(5,6)
g.add_edge(2,1)
g.add_edge(3,7)

print(g.nth_hub(6,3))
