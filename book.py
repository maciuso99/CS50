import sys

phonebook = {
    "David": "504-004-004",
    "Maciej": "40230202"
}

get_name = input("enter a name: ")
if get_name in phonebook:
    number = phonebook[get_name]
    print(f"Number is {number}")
