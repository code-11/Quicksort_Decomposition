import math
def quicksort(input_array):
	if len(input_array)<=1:
		return input_array
	pivot=input_array.pop(0)
	less=[]
	greater=[]
	for el in input_array:
		if el <=pivot:
			less.append(el)
		else:
			greater.append(el)
	return quicksort(less)+[pivot]+quicksort(greater)

def main():
	print quicksort([7,3,-2.7777,6,-98,8.5,42,6,math.pi,78,0])

if __name__ == '__main__':
	main()