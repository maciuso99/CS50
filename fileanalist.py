import csv

titles = {}

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
      title = row["language"].strip().upper()
      if not title in titles:
        titles[title] = 0
      titles[title] += 1 

for title in sorted(titles, key=lambda title: titles[title], reverse = True):
  print(title, titles[title])
 