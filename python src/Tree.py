class TreeNode:
	def __init__(self, val):
		self.val = val
		self.left = self.right = None

class BST:
	def __init__(self):
		self.root = None

	def getRoot(self):
		return self.root

	def insert(self, val):
		if(self.root is None):
			self.root = TreeNode(val)
		else:
			temp = self.root
			while temp is not None:
				if val < temp.val and temp.left is not None:
					temp = temp.left
				elif val > temp.val and temp.right is not None:
					temp = temp.right
				else:
					break

			if val < temp.val:
				temp.left = TreeNode(val)
			elif val > temp.val:
				temp.right = TreeNode(val)
			else:
				print("Duplicate",val)
			
	def inorder(self, root):
		if root is not None:
			self.inorder(root.left)
			print(root.val, end=" ")
			self.inorder(root.right)

	def preorder(self, root):
		if root is not None:
			print(root.val, end=" ")
			self.preorder(root.left)
			self.preorder(root.right)

	def postorder(self, root):
		if root is not None:
			self.postorder(root.left)
			self.postorder(root.right)
			print(root.val, end=" ")

t = BST()
t.insert(10)
t.insert(5)
t.insert(15)
t.insert(6)

print("inorder:", end=" ")
t.inorder(t.getRoot())
print()

print("preorder:", end=" ")
t.preorder(t.getRoot())
print()

print("postorder:", end=" ")
t.postorder(t.getRoot())




