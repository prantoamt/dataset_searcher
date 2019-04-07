import csv

file = open('air_quality_Nov2017.csv')

csv_file = csv.reader(file)

data_list = []
for row in csv_file:
	data_list.append(row)

searching_criteria = data_list[0]
data_list.remove(data_list[0])
searching_criteria.remove('Longitude')
searching_criteria.remove('Latitude')
searching_criteria.remove('Generated')

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
	input_search = input("03 Hour: ")
	for row in data_list:
		if (input_search == data_list[data_list.index(row)][4]):
			print (row)

if (search_option == 3):
	input_search = input("O3 Quality: ")
	for row in data_list:
		if (input_search == data_list[data_list.index(row)][5]):
			print (row)

if (search_option == 4):
	input_search = input("O3 Value: ")
	for row in data_list:
		if (input_search == data_list[data_list.index(row)][6]):
			print (row)

if (search_option == 5):
	input_search = input("NO2 Hour: ")
	for row in data_list:
		if (input_search == data_list[data_list.index(row)][7]):
			print (row)

if (search_option == 6):
	input_search = input("NO2 Quality: ")
	for row in data_list:
		if (input_search == data_list[data_list.index(row)][8]):
			print (row)


if (search_option == 7):
	input_search = input("NO2 Value: ")
	for row in data_list:
		if (input_search == data_list[data_list.index(row)][9]):
			print (row)	


if (search_option == 8):
	input_search = input("PM10 Hour: ")
	for row in data_list:
		if (input_search == data_list[data_list.index(row)][10]):
			print (row)

if (search_option == 9):
	input_search = input("PM10 Quality: ")
	for row in data_list:
		if (input_search == data_list[data_list.index(row)][11]):
			print (row)


if (search_option == 10):
	input_search = input("PM10 Value: ")
	for row in data_list:
		if (input_search == data_list[data_list.index(row)][12]):
			print (row)							


file.close()