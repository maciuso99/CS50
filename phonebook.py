import csv

file = open("phonebook.csv","a") 

name = input("Enter the name: ")
number = input("Enter the number: ")

writer = csv.writer(file)
writer.writerow([name, number])

file.close()

#with open(filename, a) as file: