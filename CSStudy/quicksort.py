import random
import pdb
def quicksort(array):
    pdb.set_trace()
    if(len(array)>1):
        left=[]
        right=[]
		pivot=array[0]
		for i in range(len(array)):
			if(array[i]<=pivot):
				left.append(array[i])
			elif(array[i]>pivot):
				right.append(array[i])
		print (left,":",right)
		print("done iterating")
	return quicksort(left)+quicksort(right)
array=[13,2,4,1,43,1,1,31,31,3,5]

sorted=quicksort(array)
for i in range(len(sorted)):
	print (sorted[i])
