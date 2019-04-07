import csv
from tabulate import tabulate

file = open('air_quality_Nov2017.csv')

csv_file = csv.reader(file)

data_list = []
for row in csv_file:
	data_list.append(row)

searching_criteria = data_list[0]
data_list.remove(data_list[0])

print ("Search by: ")
for item in searching_criteria:
	print (searching_criteria.index(item), item)

search_option = int(input("Select one option from above criteria: "))

if (search_option == 0):
	input_search = input("Station: ")
	for row in data_list:
		if input_search in data_list[data_list.index(row)][search_option]:
			print (row)

if (search_option == 1):
	input_search = input("Air Quality: ")
	for row in data_list:
		if input_search in data_list[data_list.index(row)][search_option]:
			print (row)

if (search_option == 2):
	input_range_1 = float(input("Longitude from ____ ?:"))
	input_range_2 = float(input("to ____ ?:"))
	for row in data_list:
		if (float(data_list[data_list.index(row)][search_option]) >= input_range_1 and float(data_list[data_list.index(row)][search_option]) <= input_range_2):
			print (row)

if (search_option == 3):
	input_range_1 = float(input("Latitude from ____ ?:"))
	input_range_2 = float(input("to ____ ?:"))
	for row in data_list:
		if (float(data_list[data_list.index(row)][search_option]) >= input_range_1 and float(data_list[data_list.index(row)][search_option]) <= input_range_2):
			print (row) 	

file.close()