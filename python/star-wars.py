def relation_to_luke(name):
  relation = ""
  if name == "Darth Vader":
    relation = "father"
  elif name == "Leia":
    relation = "sister"
  elif name == "Han":
    relation = "brother in law"
  elif name == "R2D2":
    relation = "droid"
  print("Luke, I am your " + relation + ".")

#testing
relation_to_luke("Darth Vader")
relation_to_luke("Leia")
relation_to_luke("Han")
relation_to_luke("R2D2")