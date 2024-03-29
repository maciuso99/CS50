import csv

houses = {
    "Gryffindor":0,
    "Ravenclaw":0,
    "Hufflepuff":0,
    "Slytherin":0,
}

with open("hogwarts.csv","r") as file:
    reader = csv.reader(file)
    next(reader)
    for row in reader:
        house = row[1]
        houses[house] += 1

for house in houses:
  count = houses[house]
  print(f"{house}: {count}")

#DictReader makes possible to call keys from dictionaries file by the name