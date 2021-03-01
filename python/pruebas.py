word = input("Write hello, please: ")
word = word.lower()
check = True
while check == True:
  if word == "hello":
    print("That's right, let's to start!")
    check = False
    print("Hello to Pig Latin is: Ellohay")
  else:
    word = input("Please try again: ")
    word = word.lower()
    check = True