answer = input("What's your name? ")
print(f"hello, {answer}")
try:
  x = int(input("pass the number: "))
except ValueError:
  print("That is not an nubmer")
  exit()  
try:
  y = int(input("pass the number: "))
except ValueError:
  print("That is not an nubmer")
  exit()  
print(x+y)
z = x / y
print(f"{z:.50f}")

while True:
  n = int(input("Height: "))
  if n > 0:
    break
